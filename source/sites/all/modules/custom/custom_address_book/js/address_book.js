(function($) {
    Drupal.behaviors.userAddresses = {
        attach: function (context, settings) {
            $('input[id^="edit-views-bulk-operations--"]').once().click(function() {
                var coordinates = $(this).parents('.views-row').find('.views-field-field-location-coordinates .field-content').html();
                console.log(coordinates);

                var user_coordinates = coordinates.split(' ');
                var longitude = user_coordinates[0];
                var latitude = user_coordinates[1];

                var geocoder = new google.maps.Geocoder();
                var geolocate = new google.maps.LatLng(latitude, longitude);

                geocoder.geocode({'latLng': geolocate}, function(results, status) {
                    if (status == google.maps.GeocoderStatus.OK) {
                        var result = (results.length > 1) ? results[1] : results[0];
                        var address = Drupal.behaviors.get_address(result.address_components, ['sublocality_level_1', 'locality']);

                        localStorage.setItem('current_location', address);

                        $.post('/set_current_location/' + address, function(result) {
                            if (result) {
                                console.log('Current location set in session: ' + localStorage.getItem('current_location'));
                                $.get('/get_stores_by_coordinate/' + latitude + '/' + longitude, function( result ) {

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
            })
        }
    }
})(jQuery);