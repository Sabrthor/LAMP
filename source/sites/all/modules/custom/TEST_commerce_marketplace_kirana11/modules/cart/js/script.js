(function($) {
  Drupal.behaviors.emptyCartAndChangeLocation = {
    attach: function (context) {
      $(".not-empty-location input").once().click(function(){
        var clickedId = this.id;
        console.log(clickedId);
        if(clickedId != "click-yes") {
          console.log("Clicked No goes here");
          $(".overlay-popup").hide();
        }else {
          $(".find-change-location").show();
          $(".not-empty-location").hide();

          // Remove all the orders (from each store) in the cart.
          $.get('/empty_cart_orders', function( result ) {
            console.log(result);
          });
        }
      });
    }
  }

  // Drupal.behaviors.clickOnPlus = {
  //   attach: function (context) {
  //     $("#edit-plus").once().click(function() {
  //       console.log('Plus');
  //
  //       return false;
  //     });
  //   }
  // }

})(jQuery);
