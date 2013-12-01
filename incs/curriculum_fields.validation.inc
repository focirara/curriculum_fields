<?php

/**
 * @file
 * Helper Validation functions for the curriculum_fields module
 *
 * @author Chris Perkins <chrisperkinsuk@gmail.com>
 * @license http://opensource.org/licenses/gpl-license.php GNU Public Licence
 * @copyright (c) 2013, Christopher Perkins
 */

/**
 * Helper function for curriculum_fields_field_validate().
 *
 * @see curriculum_fields_field_validate()
 *
 * @param array $field
 * @param array $instance
 * @param array $langcode
 * @param array $items
 * @param array $errors
 */
function _curriculum_fields_objective_field_validate($field, $instance, $langcode, $items, &$errors) {

  foreach ($items as $delta => $item) {

    // Name must be a string
    if (isset($item['name']) && !is_string($item['name'])) {
      $errors[$field['field_name']][$langcode][$delta][] = array(
        'error' => 'curriculum_fields_objective_type',
        'message' => t('%title: Your learning objective Name must be a string. '
          . 'Please ensure a string is being passed to the form. ', array('%title' => $instance['label'])),
      );
    }

    // Name can not be more than 35 chars
    if (isset($item['name']) && strlen($item['name']) > 35) {
      $errors[$field['field_name']][$langcode][$delta][] = array(
        'error' => 'curriculum_fields_objective_length',
        'message' => t('%title: Your learning objective Name contains too '
          . 'many characters. Please ensure it has no more than 35 '
          . 'characters. ', array('%title' => $instance['label'])),
      );
    }

    // Name must be string
    if (isset($item['objective']) && !is_string($item['objective'])) {
      $errors[$field['field_name']][$langcode][$delta][] = array(
        'error' => 'curriculum_fields_objective_type',
        'message' => t('%title: Your learning objective must be a string. '
          . 'Please ensure a string is being passed to the form. ', array('%title' => $instance['label'])),
      );
    }

    // Objective must have a Name
    if (isset($item['objective']) && isset($item['name']) && !empty($item['objective']) && empty($item['name'])) {
      $errors[$field['field_name']][$langcode][$delta][] = array(
        'error' => 'curriculum_fields_objective_missing_name',
        'message' => t('%title: You must enter a name for your Learning '
          . 'objective or it will not save. Pleaseenter a name or delete '
          . 'the text in the Objective text box.', array('%title' => $instance['label'])),
      );
    }
  }
}

/**
 * Helper function for curriculum_fields_field_validate().
 *
 * @see curriculum_fields_field_validate()
 *
 * @param array $field
 * @param array $instance
 * @param array $langcode
 * @param array $items
 * @param array $errors
 */
function _curriculum_fields_environment_field_validate($field, $instance, $langcode, $items, &$errors) {

  foreach ($items as $delta => $item) {

    // Name must be a string
    if (isset($item['name']) && !is_string($item['name'])) {
      $errors[$field['field_name']][$langcode][$delta][] = array(
        'error' => 'curriculum_fields_environment_type',
        'message' => t('%title: Your environmental constraint Name must be a string. '
          . 'Please ensure a string is being passed to the form. ', array('%title' => $instance['label'])),
      );
    }

    // Name can not be more than 35 chars
    if (isset($item['name']) && strlen($item['name']) > 35) {
      $errors[$field['field_name']][$langcode][$delta][] = array(
        'error' => 'curriculum_fields_environment_length',
        'message' => t('%title: Your environmental constraint Name contains too '
          . 'many characters. Please ensure it has no more than 35 '
          . 'characters. ', array('%title' => $instance['label'])),
      );
    }

    // Environmental Constraints must be string
    if (isset($item['environment']) && !is_string($item['environment'])) {
      $errors[$field['field_name']][$langcode][$delta][] = array(
        'error' => 'curriculum_fields_environment_type',
        'message' => t('%title: Your environmental constraint must be a string. '
          . 'Please ensure a string is being passed to the form. ', array('%title' => $instance['label'])),
      );
    }

    // Objective must have a Name
    if (isset($item['environment']) && isset($item['name']) && !empty($item['environment']) && empty($item['name'])) {
      $errors[$field['field_name']][$langcode][$delta][] = array(
        'error' => 'curriculum_fields_environment_missing_name',
        'message' => t('%title: You must enter a name for your Environmental '
          . 'Constraint or it will not save. Please enter a name ore delete '
          . 'the text in the constraint field.', array('%title' => $instance['label'])),
      );
    }
  }
}