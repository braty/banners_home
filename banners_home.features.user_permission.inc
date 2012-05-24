<?php
/**
 * @file
 * banners_home.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function banners_home_user_default_permissions() {
  $permissions = array();

  // Exported permission: create banner content.
  $permissions['create banner content'] = array(
    'name' => 'create banner content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create banner_pequeno content.
  $permissions['create banner_pequeno content'] = array(
    'name' => 'create banner_pequeno content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any banner content.
  $permissions['delete any banner content'] = array(
    'name' => 'delete any banner content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any banner_pequeno content.
  $permissions['delete any banner_pequeno content'] = array(
    'name' => 'delete any banner_pequeno content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own banner content.
  $permissions['delete own banner content'] = array(
    'name' => 'delete own banner content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own banner_pequeno content.
  $permissions['delete own banner_pequeno content'] = array(
    'name' => 'delete own banner_pequeno content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any banner content.
  $permissions['edit any banner content'] = array(
    'name' => 'edit any banner content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any banner_pequeno content.
  $permissions['edit any banner_pequeno content'] = array(
    'name' => 'edit any banner_pequeno content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own banner content.
  $permissions['edit own banner content'] = array(
    'name' => 'edit own banner content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own banner_pequeno content.
  $permissions['edit own banner_pequeno content'] = array(
    'name' => 'edit own banner_pequeno content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
