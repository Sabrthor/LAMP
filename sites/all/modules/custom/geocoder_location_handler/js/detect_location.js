(function($) {
  Drupal.behaviors.findLocation = {
    attach: function (context) {
      $("#edit-detect-my-location").once().click(function() {
        console.log('First button');
        var timeoutVal = 10 * 1000 * 1000;

        if(!!navigator.geolocation) {
          localStorage.setItem('local_address', null); 
          navigator.geolocation.getCurrentPosition(function(position) {
            var geocoder = new google.maps.Geocoder();
            var geolocate = new google.maps.LatLng(position.coords.latitude, position.coords.longitude);

            console.log(position.coords.latitude + ', ' + position.coords.longitude);

            geocoder.geocode({'latLng': geolocate}, function(results, status) {
              if (status == google.maps.GeocoderStatus.OK) {
                var result = (results.length > 1) ? results[1] : results[0];
                var address = get_address(result.address_components, ['sublocality_level_1', 'locality']);

                localStorage.setItem('local_address', address); 

                $.get('/get_stores_by_coordinate/' + position.coords.latitude + '/' + position.coords.longitude, function( result ) {
                  console.log(result);
                  console.log('Local address:: ' + localStorage.getItem('local_address'));

                  // Redirect to homepage if store(s) available.
                  if (result.length > 0) {
                    window.location.href = '/';
                  }
                });              
              }  
            });                  
          }, function(error) {
            var errors = { 
              1: 'Permission denied',
              2: 'Position unavailable',
              3: 'Request timeout'
            };
            console.log("Error: " + errors[error.code]);
          }, { 
            enableHighAccuracy: true, 
            timeout: timeoutVal, 
            maximumAge: 0 
          });
        }  

        return false;
      });
      $("#edit-select-location").once().click(function() {
        var autocomplete = new google.maps.places.Autocomplete(this);

        autocomplete.addListener('place_changed', function () {
          var place = autocomplete.getPlace();

          if (typeof place.geometry != 'undefined') {
            var geocoder = new google.maps.Geocoder();
            var geolocate = new google.maps.LatLng(place.geometry['location'].lat(), place.geometry['location'].lng());

            geocoder.geocode({'latLng': geolocate}, function(results, status) {
              if (status == google.maps.GeocoderStatus.OK) {
                var result = (results.length > 1) ? results[1] : results[0];
                var address = get_address(result.address_components, ['sublocality_level_1', 'locality']);

                localStorage.setItem('local_address', address); 

                $.get('/get_stores_by_coordinate/' + place.geometry['location'].lat() + '/' + place.geometry['location'].lng(), function( result ) {
                  console.log(result);
                  console.log('Local address:: ' + localStorage.getItem('local_address'));

                  // Redirect to homepage if store(s) available.
                  if (result.length > 0) {
                    window.location.href = '/';
                  }
                });              
              }  
            });  
          } else {
            console.log('Not a valid location');
          }         
        });
      });      
    }
  };

  function get_address(address_components, address_types) { 
    var show_address = '';

    address_types.forEach(function(address_type) {    
      address_components.forEach(function(address) {
        address.types.forEach(function(type) {          
          if (type.localeCompare(address_type) === 0) {
            show_address += address.long_name + ', ';

            return false;
          }
        });  
      });
    });

    show_address = show_address.substring(0, show_address.trim().length - 1);

    return show_address;
  }

})(jQuery);
