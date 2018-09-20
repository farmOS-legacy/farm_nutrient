<?php

/**
 * @file
 * Nutrient management dashboard pages code.
 */

/**
 * Page callback for the nutrient management dashboard.
 */
function farm_nutrient_dashboard() {
  $build = array();

  // Set the page title.
  drupal_set_title(t('Nutrient Management Dashboard'));

  // Add the collapse library so our collapsible fieldsets work properly.
  drupal_add_library('system', 'drupal.collapse');

  $build['container'] = array(
    '#type' => 'fieldset',
    '#title' => t('Nutrient management'),
    '#description' => t("This dashboard provides shortcuts for keeping nutrient management records with farmOS. More information can be found in the " . l('Nutrient Management module documentation', 'http://farmOS.org/guide/contrib/nutrient') . " on " . l('farmOS.org', 'http://farmOS.org') . "."),
  );

  // Build collapsed fieldsets.
  $fieldsets = array(
    'soil_tests' => array(
      'title' => t('Soil tests'),
      'description' => t('Testing the nutrient levels of your soils will provide valuable information to help in your nutrient management planning process.'),
      'links' => array(
        l(t('Add a soil test record'), 'log/add/farm_soil_test'),
        l(t('View all soil test records'), 'farm/logs/soil-tests'),
      ),
    ),
    'plans' => array(
      'title' => t('Nutrient management plans'),
      'description' => t('All of your planning documents can be organized into "Nutrient Management Plans" in farmOS. You can create plans for each year, and archive old ones for future reference.'),
      'links' => array(
        l(t('Create a new Nutrient Management Plan'), 'farm/plan/add/nutrient'),
        l(t('View all Nutrient Management Plans'), 'farm/plans/nutrient'),
      ),
    ),
    'inputs' => array(
      'title' => t('Amendment records'),
      'description' => t('Keeping records your soil amendment activities provides useful information to look back on, and is a requirement for some regulatory programs.'),
      'links' => array(
        l(t('Record an amendment to your soil'), 'farm/quick/amendment'),
        l(t('View all input logs'), 'farm/logs/inputs'),
      ),
    ),
  );
  $build['container']['fieldsets'] = array();
  foreach ($fieldsets as $key => $fieldset) {
    $build['container']['fieldsets'][$key] = array(
      '#type' => 'fieldset',
      '#title' => $fieldset['title'],
      '#description' => $fieldset['description'],
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
      '#attributes' => array(
        'class' => array(
          'collapsible',
          'collapsed',
        ),
      ),
    );
    if (!empty($fieldset['links'])) {
      $build['container']['fieldsets'][$key]['links'] = array(
        '#theme' => 'item_list',
        '#title' => t('Quick links'),
        '#items' => $fieldset['links'],
      );
    }
  }

  // Return the render array.
  return $build;
}
