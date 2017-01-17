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
          $(this).parents("ul").prev("a.active").toggleClass("region-header-menu-o");
        });
    }
  };

  Drupal.behaviors.kirana11CategoryMobileMenuList = {
    attach: function (context) {
      /* mobile Category Menu */
      $(".mobile-category-section").once().click(function(){
         $(".overlay-popup-menu").show();
         $(".overlay-popup-container-menu").show();
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

  Drupal.behaviors.emptyCartAndChangeLocation = {
    attach: function (context) {
      $(".not-empty-location input").once().click(function(){
        var clickedId = this.id;
        console.log(clickedId);
        if(clickedId != "click-yes") {
          console.log("Clicked No goes here");
          $(".overlay-popup").hide();
        }else {
          console.log("Clicked Yes goes here");
          $(".find-change-location").show();
          $(".not-empty-location").hide();
        }
      });
    }
  }

})(jQuery);