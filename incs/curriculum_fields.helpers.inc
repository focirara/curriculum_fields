<?php

/**
 * @file
 * Helper functions for the curriculum_fields module
 *
 * @author Chris Perkins <chrisperkinsuk@gmail.com>
 * @license http://opensource.org/licenses/gpl-license.php GNU Public Licence
 * @copyright (c) 2013, Christopher Perkins
 */

/**
 * Helper function for curriculum_fields_qualification Field.
 *
 * Provides an associative array of qualifications and their machine
 * names for the the curriculum_fields_qualification field.
 *
 * @see curriculum_fields_field_widget_form()
 * @see curriculum_fields_field_is_empty()
 *
 * @param string $quals - A String of comma seperated Qualification Level names.
 * @return array
 */
function _curriculum_fields_qualification_builder($quals = NULL) {

  if (empty($quals)) {
    // Default qualifications
    $quals = 'Pass, Merit, Distinction';
  }

  // Make the list into an array
  $quals_arr = explode(', ', $quals);

  // Hold machine=>Qual names in an associative array
  $machine_arr = array();

  // Itterate over $quals_arr to create machine names
  foreach ($quals_arr as $qual) {

    $qual = trim($qual); // Remove Whitespace
    $machine = str_replace(' ', '_', $qual); // Internal spaces to underscores
    $machine = strtolower($machine); // Machine name to lowercase

    $machine_arr[$machine] = $qual;
  }

  return $machine_arr;
}

/**
 * Helper function for curriculum_fields_field_presave().
 *
 * @see curriculum_fields_field_presave()
 *
 * Make changes to the Learning Objective field after
 * validation and before saving.
 *
 * @param array $items
 */
function _curriculum_fields_field_objective_presave(&$items) {

  foreach ($items as $delta => $item) {
    // If the objective is empty set a reminder for the user to enter something later on.
    if (isset($item['objective']) && empty($item['objective'])) {

    $items[$delta]['objective'] = "@TODO: Enter an objective here!";
    }
  }
}

/**
 * Helper function for curriculum_fields_field_presave().
 *
 * @see curriculum_fields_field_presave()
 *
 * Make changes to the Environmental Constraints field after
 * validation and before saving.
 *
 * @param array $items
 */
function _curriculum_fields_field_environment_presave(&$items) {

  foreach ($items as $delta => $item) {
    // If the constraint is empty set a reminder for the user to enter something later on.
    if (isset($item['environment']) && empty($item['environment'])) {

    $items[$delta]['environment'] = "@TODO: Enter a constraint here!";
    }
  }
}
