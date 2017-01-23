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
      /* Search page menu */
      $(".page-products-search .mobile-category-section a.filter-brands").once().click(function(){
        $(".overlay-popup-menu, .overlay-popup-filter-container, .filter-brands-title, .block-facetapi:last-child").show();
        $(".overlay-popup-menu-container, .filter-categories-title, .filter-discount-title, .block-facetapi:first-child").hide();
        
      });
      $(".page-products-search .mobile-category-section a.filter-discount").once().click(function(){
         $(".overlay-popup-menu, .overlay-popup-filter-container, .filter-discount-title, .block-facetapi:first-child").show();
        $(".overlay-popup-menu-container, .filter-categories-title, .filter-brands-title, #edit-category-id-wrapper, .block-facetapi:last-child").hide();
      });
      $(".mobile-category-section a.menu-categories").once().click(function(){
        $(".overlay-popup-menu").show();
        $(".overlay-popup-menu-container").show();
        $(".overlay-popup-filter-container").hide();
      });
      $(".mobile-category-section a.filter-categories").once().click(function(){
        $(".overlay-popup-menu, .overlay-popup-filter-container, .filter-categories-title, #edit-category-id-wrapper, #block-block-16").show();
        $(".overlay-popup-menu-container, .filter-brands-title, .filter-discount-title, #edit-field-brand-tid-wrapper, #edit-brand-wrapper, #edit-deals-wrapper").hide();
      });
      $(".mobile-category-section a.filter-brands").once().click(function(){
        $(".overlay-popup-menu, .overlay-popup-filter-container, .filter-brands-title, #edit-field-brand-tid-wrapper, #edit-brand-wrapper").show();
        $(".overlay-popup-menu-container, .filter-categories-title, .filter-discount-title, #edit-category-id-wrapper, #edit-deals-wrapper, #block-block-16").hide();
      });
      $(".mobile-category-section a.filter-discount").once().click(function(){
        $(".overlay-popup-menu, .overlay-popup-filter-container, .filter-discount-title, #edit-deals-wrapper").show();
        $(".overlay-popup-menu-container, .filter-categories-title, .filter-brands-title, #edit-category-id-wrapper, #edit-field-brand-tid-wrapper, #edit-brand-wrapper, #block-block-16").hide();
      });
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
      $(".overlay-popup-close").once().click(function(){
        $(".overlay-popup").hide();
      });
    }
  }

  Drupal.behaviors.kirana11ChangeMainCategoryHref = {
    attach: function (context) {
      $(document).ready(function(){
        $(".region-header-menu ul.menu > li > a").attr("href", "javascript:")
      });
    }
  }

  Drupal.behaviors.kirana11CategoryMenuLeft = {
    attach: function (context) {
      $(document).ready(function(){
        var id = $("#selected_tid").html();
        $("ul.menu_level_1 li").removeClass('cm-expanded');
        $("." + id).parents('ul.menu_level_1 li').css({"font-weight": "700", "color" : "#346d35"});
        $("." + id).css({"color" : "#346d35"});
        $("." + id).parents('ul.menu_level_1 li').addClass('cm-expanded');
        $("." + id).parents('ul.menu_level_1 > li').find('a').css({"color" : "#346d35"});
        $("." + id).parents('ul.menu_level_1 li > ul.menu_level_2').toggle('slow');
        $("." + id).parentsUntil('.menu_level_2').find('ul.menu_level_3').toggle('slow');
      });
      
      $(".menu_level_1 > li > a").once().click(function(){
        $(".menu_level_1 li").removeClass('cm-expanded');
        $(".menu_level_1 > li > a").css({"font-weight": "400", "color" : "#666"});
        $(".menu_level_1 > li ul").hide();
        $(this).next('ul').toggle('slow');
        $(this).parent('ul li').addClass('cm-expanded');
        $(this).css({"font-weight": "700", "color" : "#346d35"});
      });

      $(".menu_level_2 > li a").once().click(function(){
        $(".menu_level_2 li").removeClass('cm-expanded');
        $(".menu_level_2 > li a").css({"font-weight": "400", "color" : "#666"});
        $(".menu_level_2 > li ul").hide();
        $(this).next('ul').toggle('slow');
        $(this).parents('ul > li').addClass('cm-expanded');
        $(this).css({"font-weight": "700", "color" : "#346d35"});
      });
    }
  }

  Drupal.behaviors.kirana11ProductCategoryMenuLeft = {
    attach: function (context) {
      $(document).ready(function(){

        $(".bef-tree .highlight").parents('ul').show();
        $(".bef-tree .highlight").parents('ul li').addClass('cm-expanded');

         $('ul.bef-tree > li > div label, .bef-tree-depth-1 > li > div label').on('click', function(event) {
             event.preventDefault();
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
      });
    }
  }

})(jQuery);