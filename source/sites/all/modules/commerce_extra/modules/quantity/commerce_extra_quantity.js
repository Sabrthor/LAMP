(function ($) {

  $( document ).ready(function() {
    $('.views-row .commerce-quantity-plusminus-link a.button').attr('href', 'javascript:');
  });

  // Increase/decrease quantity
  Drupal.commerce_extra_quantity_quantity = function(selector, way, amount, limit_down) {

    // Find out current quantity and figure out new one
    var quantity = parseFloat($(selector).val());
    if (way == 1) {
      // Increase
      var new_quantity = quantity+amount;
    }
    else if (way == -1) {
      // Decrease
      var new_quantity = quantity-amount;
    }
    else {
      var new_quantity = quantity;
    }

    // Set new quantity
    if (new_quantity >= limit_down) {
      $(selector).val(new_quantity).trigger('change');
    }

    // Set disabled class depending on new quantity
    if (new_quantity <= limit_down) {
      $(selector).prev('span').addClass('commerce-quantity-plusminus-link-disabled');
    }
    else {
      $(selector).prev('span').removeClass('commerce-quantity-plusminus-link-disabled');
    }

    var product_id = $(selector).parents('.views-row').find('.cart_product_id').html();

    // K11 - Update the cart.
    $.get('/update_cart/' + product_id + '/' + new_quantity, function( result ) {
      console.log(result);
      return false;
    });

  }

}(jQuery));
