(function($) {
  Drupal.behaviors.clickOnRoyaltyRequired = {
    attach: function (context) {
      $("#loyalty_required").once().click(function() {
        var royalty_required_status = this.checked ? 1 : 0;
        $(".loyalty-input span").addClass('show-after');
        
        $.get('/apply_k11_userpoints/' + royalty_required_status, function( result ) {
          console.log(result);
          window.location.reload();
        });
      });
    }
  }
})(jQuery);
