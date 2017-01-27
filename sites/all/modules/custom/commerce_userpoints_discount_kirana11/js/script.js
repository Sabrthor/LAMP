(function($) {
  Drupal.behaviors.clickOnRoyaltyRequired = {
    attach: function (context) {
      $("#loyalty_required").once().click(function() {
        var royalty_required_status = this.checked ? 1 : 0;

        $.get('/apply_k11_userpoints/' + royalty_required_status, function( result ) {
          console.log(result);
        });
      });
    }
  }

})(jQuery);
