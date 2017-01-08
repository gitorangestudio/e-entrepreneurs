<?php
global $base_url;
$path_to_theme = $base_url . '/' . drupal_get_path('theme','vie_hub') . '/templates/front-page/'; 
?>


<?php if(in_array('Program Manager', $user->roles) || in_array('administrator', $user->roles)): ?>

    <a href="<?php print url('control-panel'); ?>" class="cp-link" id="cp-panel">
        <span>Control Panel</span>
        <i class="fa fa-cog"></i>
    </a>

    <a href="<?php print url('classes'); ?>" class="cp-link" id="cp-class">
        <span>Manage Classes</span>
        <i class="fa fa-file-excel-o"></i>
    </a>

    <a href="<?php print url('submitted-business-ideas'); ?>" class="cp-link" id="cp-project">
        <span>Manage Business Ideas</span>
        <i class="fa fa-file-powerpoint-o"></i>
    </a>

    <a href="<?php print url('manage-courses'); ?>" class="cp-link" id="cp-courses">
        <span>Manage Courses</span>
        <i class="fa fa-leanpub"></i>
    </a>
<?php endif; ?>

      <section id="navigation">
         <div class="navbar navbar-inverse" role="navigation">
            <div class="container">
               <div class="navbar-header">
                  <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse"> <span class="sr-only">Toggle navigation</span> <span class="icon-bar"></span> <span class="icon-bar"></span> <span class="icon-bar"></span> </button>
                   
                    <div class="search-icon visible-xs visible-sm">
                        <a href="<?php print url('search/site'); ?>">
                            <i class="fa fa-search"></i>
                        </a>
                    </div>
                   
                <?php if ($logo): ?>
              <a class="navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                
				<img class="logo-virtual" src="<?php print $path_to_theme; ?>img/logo-virtual.png" />
                <span id="hd-brand"><b>Virtual Innovation</b><br> and Entrepreneurship Hub</span>
              </a>
              <?php endif; ?>
               </div>
                
                
              <?php if (!empty($primary_nav)): ?>
                <div id="nav" class="collapse navbar-collapse">
                    <?php print render($primary_nav); ?>
                </div>
              <?php endif; ?>
                
               
             <?php if (!empty($page['navigation'])): ?> 
                    <?php print render($page['navigation']); ?>
            <?php endif; ?>                   
                
            </div>
         </div>
      </section>

  <?php if (!empty($page['highlighted'])): ?>
    <div class="highlighted"><?php print render($page['highlighted']); ?></div>
  <?php endif; ?>

<div class="main-container container">

  <header role="banner" id="page-header">
    <?php if (!empty($site_slogan)): ?>
      <p class="lead"><?php print $site_slogan; ?></p>
    <?php endif; ?>

    <?php print render($page['header']); ?>
  </header> <!-- /#page-header -->

  <div class="row">

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside class="col-sm-3" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?>

    <section<?php print $content_column_class; ?>>
      <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if (!empty($title)): ?>
        <h1 class="page-header"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php if (!empty($tabs)): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>
      <?php if (!empty($page['help'])): ?>
        <?php print render($page['help']); ?>
      <?php endif; ?>
      <?php if (!empty($action_links)): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
    </section>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside class="col-sm-3" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>

  </div>
</div>
<footer class="footer container">
  <?php print render($page['footer']); ?>
</footer>
