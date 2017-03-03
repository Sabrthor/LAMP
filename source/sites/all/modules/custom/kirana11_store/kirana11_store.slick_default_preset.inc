<?php
/**
 * @file
 * kirana11_store.slick_default_preset.inc
 */

/**
 * Implements hook_slick_default_presets().
 */
function kirana11_store_slick_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'store_banner';
  $preset->label = 'Store Banner';
  $preset->breakpoints = 0;
  $preset->skin = '';
  $preset->options = array(
    'optimized' => 1,
    'general' => array(
      'normal' => '',
      'thumbnail' => '',
      'template_class' => '',
      'goodies' => array(
        'arrow-down' => 0,
        'pattern' => 0,
        'random' => 0,
      ),
      'arrow_down_target' => '',
      'arrow_down_offset' => '',
    ),
    'settings' => array(
      'asNavFor' => '',
      'adaptiveHeight' => TRUE,
      'autoplay' => TRUE,
      'arrows' => FALSE,
      'prevArrow' => '<button type="button" data-role="none" class="slick-prev" aria-label="Previous" tabindex="0" role="button">Previous</button>',
      'nextArrow' => '<button type="button" data-role="none" class="slick-next" aria-label="Next" tabindex="0" role="button">Next</button>',
      'centerMode' => TRUE,
      'dots' => TRUE,
      'dotsClass' => 'slick-dots',
      'focusOnSelect' => FALSE,
      'initialSlide' => 0,
      'lazyLoad' => 'ondemand',
      'rtl' => FALSE,
      'rows' => 1,
      'slidesPerRow' => 1,
      'slide' => '',
      'slidesToShow' => 1,
    ),
  );
  $export['store_banner'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'store_details';
  $preset->label = 'Store Details';
  $preset->breakpoints = 0;
  $preset->skin = '';
  $preset->options = array(
    'optimized' => 1,
    'general' => array(
      'normal' => '',
      'thumbnail' => '',
      'template_class' => '',
      'goodies' => array(
        'arrow-down' => 0,
        'pattern' => 0,
        'random' => 0,
      ),
      'arrow_down_target' => '',
      'arrow_down_offset' => '',
    ),
    'settings' => array(
      'asNavFor' => '',
      'autoplay' => TRUE,
      'prevArrow' => '<button type="button" data-role="none" class="slick-prev" aria-label="Previous" tabindex="0" role="button"><i class="fa fa-angle-left" ></i></button>',
      'nextArrow' => '<button type="button" data-role="none" class="slick-next" aria-label="Next" tabindex="0" role="button"><i class="fa fa-angle-right" ></i></button>',
      'dots' => TRUE,
      'dotsClass' => 'slick-dots',
      'focusOnSelect' => FALSE,
      'initialSlide' => 0,
      'lazyLoad' => 'ondemand',
      'rtl' => FALSE,
      'rows' => 1,
      'slidesPerRow' => 1,
      'slide' => '',
      'slidesToShow' => 1,
    ),
  );
  $export['store_details'] = $preset;

  return $export;
}
