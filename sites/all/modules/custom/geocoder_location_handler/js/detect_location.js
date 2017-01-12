(function($) {
  Drupal.behaviors.findLocation = {
    attach: function (context) {
      $("#edit-detect-my-location").once().click(function() {
        console.log('First button');
        var timeoutVal = 10 * 1000 * 1000;

        if(!!navigator.geolocation) {
          localStorage.setItem('current_location', null); 
          navigator.geolocation.getCurrentPosition(function(position) {
            var geocoder = new google.maps.Geocoder();
            var geolocate = new google.maps.LatLng(position.coords.latitude, position.coords.longitude);

            console.log(position.coords.latitude + ', ' + position.coords.longitude);

            geocoder.geocode({'latLng': geolocate}, function(results, status) {
              if (status == google.maps.GeocoderStatus.OK) {
                var result = (results.length > 1) ? results[1] : results[0];
                var address = get_address(result.address_components, ['sublocality_level_1', 'locality']);

                localStorage.setItem('current_location', address);

                $.post('/set_current_location/' + address, function(result) {
                  if (result) {
                    console.log('Current location set in session: ' + localStorage.getItem('current_location'));
                    $.get('/get_stores_by_coordinate/' + position.coords.latitude + '/' + position.coords.longitude, function( result ) {
                  
                      // Redirect to homepage if store(s) available.
                      if (result.length > 0) {
                         if (window.location.pathname.localeCompare('/user/register') === 0) {
                          $(".error-text-location").hide();
                          window.location.href = '/user/register';
                         } else {
                          if(result != 'NO_STORES') {
                            $(".error-text-location").hide();
                            console.log("it will goes to home page");
                            window.location.href = '/';
                          } else {
                            window.location.href = '/';
                          }
                          
                         }
                      }

                    }); 
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
            $(".error-text-location").show();
            $(".error-text-location-p").html(errors[error.code]);
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
        var pyrmont = new google.maps.LatLng(12.9715987, 77.5945627);
        var defaultBounds = new google.maps.LatLngBounds(
          new google.maps.LatLng(12.838557, 77.677622),
          new google.maps.LatLng(13.033370, 77.540744));

        var autocomplete = new google.maps.places.Autocomplete(this, {
          componentRestrictions: {country: 'in'},
          location: pyrmont,
          bounds: defaultBounds,
          radius: 25000,
          type: ['(regions)'],
        });

        autocomplete.addListener('place_changed', function () {
          var place = autocomplete.getPlace();

          if (typeof place.geometry != 'undefined') {
            var geocoder = new google.maps.Geocoder();
            var geolocate = new google.maps.LatLng(place.geometry['location'].lat(), place.geometry['location'].lng());

            geocoder.geocode({'latLng': geolocate}, function(results, status) {
              if (status == google.maps.GeocoderStatus.OK) {
                var result = (results.length > 1) ? results[1] : results[0];
                var address = get_address(result.address_components, ['sublocality_level_1', 'locality']);

                localStorage.setItem('current_location', address);

                $.post('/set_current_location/' + address, function(result) {
                  if (result) {
                    console.log('Current location set in session: ' + localStorage.getItem('current_location'));
                    $.get('/get_stores_by_coordinate/' + place.geometry['location'].lat() + '/' + place.geometry['location'].lng(), function( result ) {
                  
                      // Redirect to homepage if store(s) available.
                      if (result.length > 0) {
                        if (window.location.pathname.localeCompare('/user/register') === 0) {
                          $(".error-text-location").hide();
                          window.location.href = '/user/register';
                        } else {
                          if(result != 'NO_STORES'){
                            $(".error-text-location").hide();
                            console.log("it will goes to home page");
                            window.location.href = '/';
                          } else {
                            window.location.href = '/';
                          }
                        }
                      }
                      
                    });    
                  }    
                });

                          
              }  
            });  
          } else {
            $(".error-text-location").show();
            $(".error-text-location-p").html("Not a valid location");
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

  /* Destory session */
  Drupal.behaviors.destoryLocationSessionVariable = {
    attach: function (context) {
      $(".edit-location-link").once().click(function(){
        window.location.href = '/?uds=clb';
      });
    }
  }


})(jQuery);
