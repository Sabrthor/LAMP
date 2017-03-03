(function($) {

  Drupal.behaviors.scrollTop = {
    attach: function (context) {
      $(document).ready(function(){
        $(window).scroll(function() {
          if($(this).scrollTop() != 0) {
            $("#toTop").fadeIn();
          } else {
            $("#toTop").fadeOut();
          }
        });

        $("#toTop").once().click(function() {
          $("body,html").animate({scrollTop:0},800);
        });

      });
    }
  };

  Drupal.behaviors.closeMessageAlter = {
    attach: function (context) {
      $(document).ready(function(){
        $(".close").once().click(function(){
          $(".message-alert").alert("close");
        });

      });
    }
  };

  /*Drupal.behaviors.menuSlickCustom = {
    attach: function (context) {
      $('#block-responsive-dropdown-menus-menu-custom-menu .content > ul.menu-custom-menu').slick({
        slidesToShow: 1,
        slidesToScroll: 1,
        dots: false,
        focusOnSelect: true,
        centerMode: true,
        centerPadding: 0
      });


    }
  };*/
  Drupal.behaviors.kirana11DropdownMenu = {
    attach: function (context) {
      $(".dropdown-toggle").dropdown();
      $('.navbar').on('show.bs.collapse', function () {
          var actives = $(this).find('.collapse.in'),
              hasData;

          if (actives && actives.length) {
              hasData = actives.data('collapse')
              if (hasData && hasData.transitioning) return
              actives.collapse('hide')
              hasData || actives.data('collapse', null)
          }
      });
      $(".region-header-menu ul.menu li ul li ul li a").once().hover(function(){
          $(this).parents("ul").prev("li.sf-depth-2 a").toggleClass("region-header-menu-o");
        });
    }
  };

  Drupal.behaviors.kirana11CategoryMobileMenuList = {
    attach: function (context) {
      /* mobile Category Menu */
      
      /* Other Page Left Side bar */
      $(".mobile-category-section a.menu-categories").once().click(function(){
        $(".overlay-popup-menu").show();
        $(".overlay-popup-menu-container").show();
        $(".overlay-popup-filter-container").hide();
      });

      /* Category and Store page left side bar*/
      $(".mobile-category-section a.filter-categories").once().click(function(){
        $(".region-sidebar-first .block:nth-last-child(3)").removeClass("display-none");
        $(".overlay-popup-menu, .overlay-popup-filter-container, .filter-categories-title, .region-sidebar-first .block:first-child, .page-store-products .region-sidebar-first .block:nth-last-child(3)").show();
        $(".overlay-popup-menu-container, .filter-brands-title, .filter-discount-title, .region-sidebar-first .block:nth-last-child(2), .region-sidebar-first .block:last-child").hide();
      });

      $(".mobile-category-section a.filter-brands").once().click(function(){
        $(".region-sidebar-first .block:last-child").removeClass("display-none");
        $(".overlay-popup-menu, .overlay-popup-filter-container, .filter-brands-title, .region-sidebar-first .block:last-child").show();
        $(".overlay-popup-menu-container, .filter-categories-title, .filter-discount-title, .region-sidebar-first .block:nth-last-child(3), .region-sidebar-first .block:nth-last-child(2), .region-sidebar-first .block:first-child").hide();
      });

      $(".mobile-category-section a.filter-discount").once().click(function(){
        $(".region-sidebar-first .block:nth-last-child(2)").removeClass("display-none");
        $(".overlay-popup-menu, .overlay-popup-filter-container, .filter-discount-title, .region-sidebar-first .block:nth-last-child(2)").show();
        $(".overlay-popup-menu-container, .filter-categories-title, .filter-brands-title, .region-sidebar-first .block:nth-last-child(3), .region-sidebar-first .block:last-child, .region-sidebar-first .block:first-child").hide();
      });

      /* Category Click hide Brand */
      $(".facetapi-facet-field-category").once().click(function(){
        $(".region-sidebar-first .block:last-child").addClass("display-none");
        $(".region-sidebar-first .block:nth-last-child(2)").addClass("display-none");
      });

      /* Brands Click hide View Discount, Category */
      $(".facetapi-facet-field-brand").once().click(function(){
        $(".region-sidebar-first .block:nth-last-child(3)").addClass("display-none");
        $(".region-sidebar-first .block:nth-last-child(2)").addClass("display-none");
      });

      /* Discount Click hide Category, brand */
      $("#views-exposed-form-store-products-index-page, .facetapi-facetapi-ajax-checkboxes").once().click(function(){
        $(".region-sidebar-first .block:nth-last-child(3)").addClass("display-none");
        $(".region-sidebar-first .block:last-child").addClass("display-none");
      });

      /* Close Button Overlay */
      $(".overlay-popup-menu-close").once().click(function(){
        $(".overlay-popup-menu").hide();
      });
      
    }
  }

  Drupal.behaviors.kirana11LandingThankyou = {
    attach: function (context) {
      $(document).ready(function(){
        $(".thankyou-content").parents(".landing-content-section").children("h2").hide();
        $(".user-info-from-cookie").parents(".find-location-container").find(".display-location-box p > i, .display-location-box p > a").hide();
      });
    }
  }

  Drupal.behaviors.kirana11OverlayHeaderLocation = {
    attach: function (context) {
      $(".region-header-location").once().click(function(){
        $(".overlay-popup").show();
        $(".overlay-popup-container").show();
        $(".not-empty-location").show();
        $(".find-change-location").hide();
      });
      $(".overlay-popup-close, .overlay-location-popup-close").once().click(function(){
        $(".overlay-popup").hide();
      });
    }
  }

  Drupal.behaviors.kirana11ChangeMainCategoryHref = {
    attach: function (context) {
      $(document).ready(function(){
        //$(".region-header-menu ul.menu > li > a").attr("href", "javascript:");
      });
    }
  }

  Drupal.behaviors.kirana11CategoryMenuLeft = {
    attach: function (context) {

      $(window).on("load", function() {
        var id = $("#selected_tid").html();
        var lengthLI = $(".region-sidebar-first ." + id).parents('ul').length;
        if(lengthLI > 1){
          $(".region-sidebar-first ." + id).parents('ul.menu_level_1 li').addClass('cm-expanded');
          $(".region-sidebar-first ." + id).parents('ul.menu_level_1 > li').find('a').css({"color" : "#346d35"});
          $(".region-sidebar-first ." + id).parents('ul.menu_level_1 > li').css({"font-weight": "700"});
          $(".region-sidebar-first ." + id).parents('ul.menu_level_2 > li').find('a').css({"color" : "#346d35"});
          $(".region-sidebar-first ." + id).parents('ul.menu_level_2 > li').css({"font-weight": "700"});
          $(".region-sidebar-first ." + id).parent('li').css({"font-weight": "700"});
          $(".region-sidebar-first ." + id).parents('ul.menu_level_1 li > ul').show();
          $(".region-sidebar-first ." + id).next('ul').show();
        }else{
          $(".region-sidebar-first ." + id).next('ul').show();
          $(".region-sidebar-first ." + id).parents('ul.menu_level_1 li').css({"font-weight": "700"});
          $(".region-sidebar-first ." + id).parents('ul.menu_level_1 li').addClass('cm-expanded');
          $(".region-sidebar-first ." + id).css({"color" : "#346d35"});
        }
      });
      
      $(".menu_level_1 > li > a").once().click(function(){
        if($(this).parent().hasClass('cm-expanded')){
          $(this).parent().removeClass('cm-expanded');
          $(this).next('ul').slideUp();
          $(this).css({"font-weight": "400", "color" : "#666"});
        }else{
          $(".menu_level_1 li").removeClass('cm-expanded');
          $(this).parent().addClass('cm-expanded');
          $(".menu_level_1 li a").next('ul').slideUp();
          $(this).next('ul').slideDown();
          $(".menu_level_1 li a").css({"font-weight": "400", "color" : "#666"});
          $(this).css({"font-weight": "700", "color" : "#346d35"});
        }
      });

      $(".menu_level_2 > li a").once().click(function(){
        if($(this).parent().hasClass('cm-expanded')){
          $(this).parent().removeClass('cm-expanded');
          $(this).next('ul').slideUp();
          $(this).css({"font-weight": "400", "color" : "#666"});
        }else{
          $(".menu_level_2 li").removeClass('cm-expanded');
          $(this).parent().addClass('cm-expanded');
          $(".menu_level_2 li a").next('ul').slideUp();
          $(this).next('ul').slideDown();
          $(".menu_level_2 li a").css({"font-weight": "400", "color" : "#666"});
          $(this).css({"font-weight": "700", "color" : "#346d35"});
        }
      });
    }
  }

  Drupal.behaviors.kirana11ProductCategoryMenuLeft = {
    attach: function (context) {
      $(window).on("load", function() {
        $(".bef-tree .highlight").parents('ul').show();
        $(".bef-tree .highlight").parents('ul li').addClass('cm-expanded');
        $('ul.bef-tree > li > div label, .bef-tree-depth-1 > li > div label').on('click', function(event) {
          event.preventDefault();
        });
      });

      $(".bef-tree > li > div label").once().click(function(){
        $(".bef-tree li").removeClass('cm-expanded');
        $(".bef-tree > li div > label").css({"font-weight": "400", "color" : "#666"});
        $(".bef-tree > li ul").hide();
        $(this).parent('ul li > div').next('ul').toggle('slow');
        $(this).parent('ul li').addClass('cm-expanded');
        $(this).css({"font-weight": "700", "color" : "#346d35"});
      });
      $(".bef-tree-depth-1 > li > div label").once().click(function(){
        $(".bef-tree-depth-1 li").removeClass('cm-expanded');
        $(".bef-tree-depth-1 > li  div > label").css({"font-weight": "400", "color" : "#666"});
        $(".bef-tree-depth-1 > li ul").hide();
        $(this).parent('ul li > div').next('ul').toggle('slow');
        $(this).parents('ul > li').addClass('cm-expanded');
        $(this).css({"font-weight": "700", "color" : "#346d35"});
      });
      $(".bef-tree-depth-2 > li > div label").once().click(function(){
        $(this).toggleClass("form-checked");
      });
      $(".bef-tree-depth-2 > li > div input").once().click(function(){
        $(this).next().toggleClass("form-checked");
      });
    }
  }

  Drupal.behaviors.kirana11LoyaltyTermsandCondition = {
    attach: function (context) {
      $(".loyalty-outer-terms h4").once().click(function(){
        $(".loyalty-outer-terms-text").toggle('slow');
        $(this).toggleClass('change-minus');
      });

      $(".loyalty-page .view-content caption").once().click(function(){
        $(this).parent().find("thead").toggle();
        $(this).parent().find("tbody").toggle();
        $(this).toggleClass('change-minus');
      });
    }
  }

  Drupal.behaviors.kirana11ProductDetailImage = {
    attach: function (context) {
      $(".product-details-left-image-small > img").once().click(function(){
        var thumbnail_image = $(this).attr('src');
        $(".product-details-left-image-big img").attr('src', thumbnail_image);
      });
    }
  }

  Drupal.behaviors.kirana11DiscountRemoveFalse = {
    attach: function (context) {
      $(document).ready(function(){
        $(".region-sidebar-first .facetapi-facet-field-productfield-commerce-saleprice-on-sale li label").each(function(){
          var label = $.trim($(this).html());
          if(label == "false"){
            $(this).parent().addClass("display-none-web");
          }
        });
      }); 
    }
  }

  Drupal.behaviors.kirana11DealsEntireBlockClick = {
    attach: function (context) {
      $(document).ready(function(){
        $(".view-best-deals ul.jcarousel li").css({"cursor":"pointer"});
        $(".category-display").each(function(){
          if($(this).find('.pdp-link').length > 0) {
            $(this).css({"cursor":"pointer"});
          }
        });

      });

      $(".view-best-deals ul.jcarousel li, .category-display").once().click(function(){
        var redirect_link = $(this).find(".pdp-link").attr('href');
        if(redirect_link != undefined && redirect_link != ''){
          window.location.href = redirect_link;
        }        
      });
    }
  }

})(jQuery);