(function($) {
    Drupal.behaviors.userAddresses = {
        attach: function (context) {
            $('input[id^="edit-views-bulk-operations--"]').once().click(function() {
                $(this).closest("form").submit();
            });
        }
    }
})(jQuery);