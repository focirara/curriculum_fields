<?php

/**
 * @file
 * Helper forma functions for the curriculum_fields module
 *
 * @author Chris Perkins <chrisperkinsuk@gmail.com>
 * @license http://opensource.org/licenses/gpl-license.php GNU Public Licence
 * @copyright (c) 2013, Christopher Perkins
 */

/**
 * Helper function for curriculum_fields_widget_form().
 * @see curriculum_fields_widget_form().
 *
 * Builds an array to declare the Learning Objective widgets form elements.
 *
 * @param array $items
 * @param array $delta
 * @param array $element
 * @return array
 */
function _curriculum_fields_objective_widget_form($items, $delta, $element) {

  // Make the element a fieldset.
  $element += array(
    '#type' => 'fieldset',
  );

  // Use current setting for required, if set.
  $required = $element['#required'];

  // Assign the field item by reference.
  $item =& $items[$delta];

  // Define the name field for the Form API
  $element['name'] = array(
    '#title' => t('Name'),
    '#type' => 'textfield',
    '#required' => $required,
    // use #default_value to prepopulate the element
    // with the current saved value
    '#default_value' => isset($item['name']) ? $item['name'] : '',
  );

  // Define the Objective field for the Form API
  $element['objective'] = array(
    '#title' => t('Objective'),
    '#type' => 'textarea',
    '#cols' => 40,
    '#rows' => 7,
    '#required' => $required,
    // use #default_value to prepopulate the element
    // with the current saved value
    '#default_value' => isset($item['objective']) ? $item['objective'] : '',
  );
  return $element;
}

/**
 * Helper function for curriculum_fields_widget_form().
 * @see curriculum_fields_widget_form().
 *
 * Builds an array to declare the Environmental Constraint widgets form elements.
 *
 * @param array $items
 * @param array $delta
 * @param array $element
 * @return array
 */
function _curriculum_fields_environment_widget_form($items, $delta, $element) {

    // Make the element a fieldset.
    $element += array(
      '#type' => 'fieldset',
    );

    // Use current setting for required, if set.
    $required = $element['#required'];

    // Assign the field item by reference.
    $item =& $items[$delta];

    // Define the name field for the Form API
    $element['name'] = array(
      '#title' => t('Name'),
      '#type' => 'textfield',
      '#required' => $required,
      // use #default_value to prepopulate the element
      // with the current saved value
      '#default_value' => isset($item['name']) ? $item['name'] : '',
    );

    // Define the Environmental field for the Form API
    $element['environment'] = array(
      '#title' => t('Constraint'),
      '#type' => 'textarea',
      '#cols' => 40,
      '#rows' => 7,
      '#required' => $required,
      // use #default_value to prepopulate the element
      // with the current saved value
      '#default_value' => isset($item['environment']) ? $item['environment'] : '',
    );
    return $element;
}