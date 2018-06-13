<?php
/**
 * @file
 * farm_nutrient.features.inc
 */

/**
 * Implements hook_default_farm_plan_type().
 */
function farm_nutrient_default_farm_plan_type() {
  $items = array();
  $items['nutrient'] = entity_import('farm_plan_type', '{
    "type" : "nutrient",
    "label" : "Nutrient Management Plan",
    "weight" : 0,
    "rdf_mapping" : []
  }');
  return $items;
}
