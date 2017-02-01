/**
 * Created by Vimala on 2/1/2017.
 */

(function($) {
    Drupal.behaviors.getDisabledSlots = {
        attach: function (context) {
            $("#edit-delivery-slots-pane-field-delivery-slot-date input[type=radio]").once().click(function() {
              $(".delivery_slots_pane input[type='radio'] + label, .delivery_slots_pane .form-item").removeClass("delivery-slot-active");
              $(this).parent().find('label').addClass("delivery-slot-active");
                $.get('/get_disabled_slots/' + $(this).val() + '/true', function(result){
                    if(result.length) {
                        $(result).each(function (i, time_slot) {
                          $("#edit-delivery-slots-pane-field-delivery-slots-timings input[type=radio]").each(function (j, slot) {
                            if($(this).is(':enabled')) {
                              if (time_slot === $(slot).val()) {
                                $(this).attr('disabled', true);
                              } else {
                                $(this).attr('disabled', false);
                              }
                            }
                          });
                        });
                    } else {
                      $("#edit-delivery-slots-pane-field-delivery-slots-timings input[type=radio]").each(function (j, slot) {
                          $(this).removeAttr('disabled');
                      });
                    }
                });
            });
        }
    }
})(jQuery);