(function($) {
  Drupal.behaviors.findLocation = {
    attach: function (context) {
      $("#edit-detect-my-location").once().click(function() {
        var timeoutVal = 10 * 1000 * 1000;

        if(!!navigator.geolocation) {
          navigator.geolocation.getCurrentPosition(function(position) {
            var geocoder = new google.maps.Geocoder();
            var geolocate = new google.maps.LatLng(position.coords.latitude, position.coords.longitude);

            console.log(position.coords.latitude + ', ' + position.coords.longitude);

            geocoder.geocode({'latLng': geolocate}, function(results, status) {
              if (status == google.maps.GeocoderStatus.OK) {
                var result = (results.length > 1) ? results[1] : results[0];
                console.log(result.address_components[2].long_name + ', ' + result.address_components[3].long_name);
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
    }
  };

})(jQuery);
