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

    // Update the cart if quantity >= 1.
    if(new_quantity) {
      $.get('/update_cart/' + product_id + '/' + new_quantity, function( result ) {
        //window.location.reload();
        //  return false;
      });
    }
  }

  // Refresh the cart view without page refresh.
  Drupal.behaviors.my_view_machine_name = {
    attach: function(context, settings) {
      $('.commerce-quantity-plusminus-link').once().click(function() {
        $('.view-commerce-cart-form').trigger('views_refresh');

        return false;
      });
    }
  }

  // Refresh the cart after removing the line item.
  Drupal.ajax = Drupal.ajax || {};
  Drupal.ajax.prototype.commands.dc_cart_ajax = function(ajax, response, status) {
    var $wrapper = null;

    $wrapper = $wrapper || $('#' + response['form-id']).parents('.view.view-commerce-cart-form:eq(0)').parent();

    $wrapper
      .find('div.messages').remove().end()
      .prepend(response['message']);

    if (response.output != '') {
      $wrapper.find('#dc-cart-ajax-form-wrapper').html(response.output);

      return;
    }

    $('.view-commerce-cart-form').trigger('views_refresh');
  };

}(jQuery));
