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

})(jQuery);