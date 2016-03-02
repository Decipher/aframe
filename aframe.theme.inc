<?php

/**
 * @file
 */

/**
 * Implements hook_preprocess_HOOK() for aframe-tag.html.twig.
 */
function aframe_preprocess_aframe_tag(&$variables) {
  $element = $variables['element'];
  $variables['children'] = $element['#children'];
  $variables['tag'] = $element['#tag'];
}