<?php
/**
 * @file
 * kirana11_products.slick_default_preset.inc
 */

/**
 * Implements hook_slick_default_presets().
 */
function kirana11_products_slick_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'deals_slider';
  $preset->label = 'Deals Slider';
  $preset->breakpoints = 1;
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
      'prevArrow' => '<button type="button" data-role="none" class="slick-prev" aria-label="Previous" tabindex="0" role="button"><i class="fa fa-chevron-left" ></i></button>',
      'nextArrow' => '<button type="button" data-role="none" class="slick-next" aria-label="Next" tabindex="0" role="button"><i class="fa fa-chevron-right" ></i></button>',
      'focusOnSelect' => FALSE,
      'initialSlide' => 0,
      'lazyLoad' => 'ondemand',
      'rtl' => FALSE,
      'rows' => 1,
      'slidesPerRow' => 3,
      'slide' => '',
      'slidesToShow' => 3,
    ),
    'responsives' => array(
      'responsive' => array(
        0 => array(
          'breakpoint' => 767,
          'unslick' => FALSE,
          'settings' => array(),
        ),
      ),
    ),
  );
  $export['deals_slider'] = $preset;

  return $export;
}
