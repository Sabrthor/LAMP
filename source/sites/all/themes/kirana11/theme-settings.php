<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @param $form
 *   The form.
 * @param $form_state
 *   The form state.
 */

function kirana11_form_system_theme_settings_alter(&$form, &$form_state) {
	$form['kirana11_settings'] = array(
        '#type' => 'fieldset',
        '#title' => t('Kirana11 Theme Settings'),
        '#collapsible' => FALSE,
        '#collapsed' => FALSE,
    );

    $form['kirana11_settings']['tabs'] = array(
        '#type' => 'horizontal_tabs',
    );

    $form['kirana11_settings']['tabs']['display_settings'] = array(
        '#type' => 'fieldset',
        '#title' => t('Display Settings'),
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
    );

    $form['kirana11_settings']['tabs']['display_settings']['scrolltop_display'] = array(
        '#type' => 'checkbox',
        '#title' => t('Show scroll-to-top button'),
        '#description'   => t('Use the checkbox to enable or disable scroll-to-top button.'),
        '#default_value' => theme_get_setting('scrolltop_display', 'kirana11'),
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
    );
}