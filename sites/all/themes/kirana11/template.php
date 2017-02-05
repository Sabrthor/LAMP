<?php

/**
 * Preprocess variables for page template.
 */
function kirana11_preprocess_page(&$vars) {
	if($vars['page']['sidebar_first'] && $vars['page']['sidebar_second']) { 
		$vars['sidebar_first_grid_class'] = 'col-xs-12 col-sm-3';
		$vars['sidebar_second_grid_class'] = 'col-xs-12 col-sm-3';
		$vars['main_grid_class'] = 'col-xs-12 col-sm-6';
	} elseif ($vars['page']['sidebar_first'] && !($vars['page']['sidebar_second'])) {
		$vars['sidebar_first_grid_class'] = 'col-xs-12 col-sm-4 col-md-3';
		$vars['main_grid_class'] = 'col-xs-12 col-sm-8 col-md-9';
	} elseif (!($vars['page']['sidebar_first']) && $vars['page']['sidebar_second']) {
		$vars['sidebar_second_grid_class'] = 'col-xs-12 col-sm-4 col-md-3';
		$vars['main_grid_class'] = 'col-xs-12 col-sm-8 col-md-9';			
	} else {
		$vars['main_grid_class'] = 'col-xs-12';			
	}

  if(isset($vars['page']['content']['system_main']['#form_id'])) {
    if($vars['page']['content']['system_main']['#form_id'] == 'user_login'){
      $vars['form_class_find'] = 'login_form';
    } else if($vars['page']['content']['system_main']['#form_id'] == 'user_register_form'){
      $vars['form_class_find'] = 'register_form';
    } else if($vars['page']['content']['system_main']['#form_id'] == 'user_pass'){
      $vars['form_class_find'] = 'forgot_form';
    } else{
      $vars['form_class_find'] = 'notfind_form';
    }
    
  } else{
    $vars['form_class_find'] = 'notfind_form';
  }

  if (isset($vars['node']->type)) {
      $nodetype = $vars['node']->type;
      $vars['theme_hook_suggestions'][] = 'page__' . $nodetype;
  }

  $arg = arg();
  if ($arg[0] == 'user' && is_numeric($arg[1]) && !empty($arg[2])) {
    if($arg[2] == 'change-password'){
      $vars['title'] = "Change Password";
    } 
  }
}

/* Tabs alter */
function kirana11_menu_local_tasks(&$vars) {
  $output = '';

  if (!empty($vars['primary'])) {
    $vars['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
   	$vars['primary']['#prefix'] = '<ul class="tabs--primary nav nav-tabs">';
    $vars['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($vars['primary']);
  }
  if (!empty($vars['secondary'])) {
    $vars['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $vars['secondary']['#prefix'] = '<ul class="tabs secondary clearfix">';
    $vars['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }
  return $output;
}

/* Message alter */
function kirana11_status_messages($vars) {
  $display = $vars['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
  );

  $status_class = array(
    'status' => t('alert alert-block alert-success'),
    'error' => t('alert alert-block alert-danger'),
    'warning' => t('alert alert-block alert-warning'),
  );

  foreach (drupal_get_messages($display) as $type => $messages) {
    $output .= "<div class='messages message-alert " . $status_class[$type] . "'><a href='#' class='close' data-dismiss='alert'>×</a>";
    if (!empty($status_heading[$type])) {
      $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>";
    }
    if (count($messages) > 1) {
      $output .= "<ul>";
      foreach ($messages as $message) {
        $output .= '  <li>' . $message . "</li>";
      }
      $output .= " </ul>";
    }
    else {
      $output .= reset($messages);
    }
    $output .= "</div>";
  }
  return $output;
}

/* Form alter */
function kirana11_form_alter( &$form, &$form_state, $form_id )
{
    if (in_array( $form_id, array( 'user_login')))
    {
        $form['name']['#attributes']['placeholder'] = t( 'Mobile Number' );
        $form['pass']['#attributes']['placeholder'] = t( 'Password' );
    }
    if (in_array( $form_id, array( 'user_register_form')))
    {
        $form['account']['name']['#attributes']['placeholder'] = t( 'Mobile Number *' );
        $form['account']['mail']['#attributes']['placeholder'] = t( 'Email *' );
        $form['field_user_name']['und'][0]['value']['#attributes']['placeholder'] = t( 'Name *' );
        $form['account']['pass']['#process'] = array('form_process_password_confirm', 'register_alter_password_confirm');
    }
    if (in_array( $form_id, array( 'user_pass')))
    {
        $form['name']['#attributes']['placeholder'] = t( 'Username / Email' );
    }
    if (in_array( $form_id, array( 'change_pwd_page_form')))
    {
        $form['current_pass']['#attributes']['placeholder'] = t( 'Current Password *' );
        $form['account']['pass']['#process'] = array('form_process_password_confirm', 'change_alter_password_confirm');
        $form['submit']['#value'] = t('Save');
        $form['buttons']['cancel'] = array (
          '#type' => 'button',
          '#access' => TRUE,
          '#value' => t('Cancel'),
          '#weight' => 60
        );

        $form['buttons']['cancel']['#attributes'] = array('ONCLICK' => "history.go(-1); return false;");
    }
}

/**
 * Alter password and confirm password fields to remove title and insert placeholder.
 */
function register_alter_password_confirm($element) {
    $element['pass1']['#attributes']['placeholder'] = t("Password *");
    $element['pass2']['#attributes']['placeholder'] = t("Confirm password *");
    return $element;
}

function change_alter_password_confirm($element) {
    $element['pass1']['#attributes']['placeholder'] = t("Enter NewPassword *");
    $element['pass2']['#attributes']['placeholder'] = t("Re-Enter New Password *");
    return $element;
}

/* Commerce cart Empty block alter */
function kirana11_theme_registry_alter(&$theme_registry) {
  global $theme_key;
  static $executed = array();

  // Preventing double execution.
  if (isset($executed[$theme_key])) {
    return;
  }

  $executed[$theme_key] = TRUE;

//file_put_contents("/tmp/eml-tr", print_r($theme_registry, true ) );

//$theme_registry["commerce_cart_empty_page"]['function'] = "custom_module_commerce_cart_empty_page";
$theme_registry["commerce_cart_empty_block"]['function'] = "kirana11_commerce_cart_empty_block";

}

function kirana11_commerce_cart_empty_block() {
  $html = '<img class="empty-cart-image" src="'.base_path() . path_to_theme() .'/images/cart.png" alt="Cart image" />';
  return $html;
}
