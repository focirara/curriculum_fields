<?php

/**
 * @file
 * Helper formatting functions for the curriculum_fields module
 *
 * @author Chris Perkins <chrisperkinsuk@gmail.com>
 * @license http://opensource.org/licenses/gpl-license.php GNU Public Licence
 * @copyright (c) 2013, Christopher Perkins
 */

/**
 * Helper Function - defines the output format for the objective field.
 *
 * @see curriculum_fields_field_formatter_view().
 *
 * @param array $item
 * @return array
 */
function _curriculum_fields_objective_formatter($item) {

  $element = array(
    '#type' => 'container',
    '#attributes' => array('class' => array('field-item')),
  );
  $element['name'] = array(
    'label' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('field-label')),
      'text' => array(
        '#markup' => t('Name'),
      ),
    ),
    'item' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('field-item')),
      'text' => array(
        '#markup' => $item['name'],
      ),
    ),
  );
  $element['objective'] = array(
    'label' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('field-label')),
      'text' => array(
        '#markup' => t('Objective'),
      ),
    ),
    'item' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('field-item')),
      'text' => array(
        '#markup' => $item['objective'],
      ),
    ),
  );
  return $element;
}

/**
 * Helper Function - defines the output format for the environment field.
 *
 * @see curriculum_fields_field_formatter_view().
 *
 * @param array $item
 * @return array
 */
function _curriculum_fields_environment_formatter($item) {

  $element = array(
    '#type' => 'container',
    '#attributes' => array('class' => array('field-item')),
  );
  $element['name'] = array(
    'label' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('field-label')),
      'text' => array(
        '#markup' => t('Name'),
      ),
    ),
    'item' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('field-item')),
      'text' => array(
        '#markup' => $item['name'],
      ),
    ),
  );
  $element['environment'] = array(
    'label' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('field-label')),
      'text' => array(
        '#markup' => t('Constraint'),
      ),
    ),
    'item' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('field-item')),
      'text' => array(
        '#markup' => $item['environment'],
      ),
    ),
  );
  return $element;
}

/**
 * Helper Function - defines the output format for the qualification field.
 *
 * @see curriculum_fields_field_formatter_view().
 *
 * @param array $item
 * @return array
 */
function _curriculum_fields_qualification_formatter($item) {

  $element = array(
    '#type' => 'container',
    '#attributes' => array('class' => array('field-item')),
  );
  $element['qualification'] = array(
    'label' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('field-label')),
      'text' => array(
        '#markup' => t('Level'),
      ),
    ),
    'item' => array(
      '#type' => 'container',
      '#attributes' => array('class' => array('field-item')),
      'text' => array(
        '#markup' => $item['qualification'],
      ),
    ),
  );
  return $element;
}