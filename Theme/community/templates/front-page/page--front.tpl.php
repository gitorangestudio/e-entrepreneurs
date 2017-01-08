<?php
global $base_url;
$path_to_theme = $base_url . '/' . drupal_get_path('theme','community') . '/templates/front-page/';
global $user;
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



  <div id="preloader">
     <div class="preloader"><img src="<?php print $path_to_theme; ?>img/progress.gif" alt=""></div>
  </div>

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
               <img class="logo-virtual" src="<?php print $logo; ?>" />
                <span id="hd-brand"><?php print $site_name; ?></span>
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


        <?php print $messages; ?>

<div id="home"></div>
<?php if (!empty($page['front_slider'])): ?>
        <?php print render($page['front_slider']); ?>
<?php endif; ?>

<section id="about">
    <div class="container">
        <?php if (!empty($page['front_about'])): ?>
            <?php print render($page['front_about']); ?>
        <?php endif; ?>
    </div>
  </section>

<div id="announcements"></div>
        <?php if (!empty($page['front_announcement'])): ?>
                <?php print render($page['front_announcement']); ?>
        <?php endif; ?>


<div id="projects"></div>
        <?php if (!empty($page['front_projects'])): ?>
                <?php print render($page['front_projects']); ?>
        <?php endif; ?>

<div id="success"></div>
        <?php if (!empty($page['front_success_stories'])): ?>
                <?php print render($page['front_success_stories']); ?>
        <?php endif; ?>

<div id="events"></div>
		<?php if (!empty($page['front_events'])): ?>
            <?php print render($page['front_events']); ?>
        <?php endif; ?>

<div id="resources"></div>
		<?php if (!empty($page['front_resources'])): ?>
                <?php print render($page['front_resources']); ?>
        <?php endif; ?>

<div id="questions"></div>
		<?php if (!empty($page['front_questions'])): ?>
                <?php print render($page['front_questions']); ?>
        <?php endif; ?>

<div id="partners"></div>
		<?php if (!empty($page['front_partners'])): ?>
                <?php print render($page['front_partners']); ?>
        <?php endif; ?>

<div id="contact"></div>
		<?php if (!empty($page['front_footer'])): ?>
                <?php print render($page['front_footer']); ?>
        <?php endif; ?>

<footer class="footer container">
  <?php print render($page['footer']); ?>
</footer>


      <!-- JAVASCRIPTS STARTS
         ========================================================================= -->

      <!-- Lightbox -->
      <script src="<?php print $path_to_theme; ?>lightbox/ekko-lightbox.js"></script>
      <!-- Isotope -->

      <!-- Slider Revolution 4.x Scripts -->
      <script type="text/javascript" src="<?php print $path_to_theme; ?>rs-plugin/js/jquery.themepunch.plugins.min.js"></script>
      <script type="text/javascript" src="<?php print $path_to_theme; ?>rs-plugin/js/jquery.themepunch.revolution.js"></script>
      <script type="text/javascript">
         var revapi;

         jQuery(document).ready(function() {

                setTimeout(function(){ revapi.revredraw(); }, 3000);

         	   revapi = jQuery('.tp-banner').revolution(
         		{
         			delay:9000,
         			startwidth:1170,
         			startheight:500,
         			hideThumbs:10,
         			fullWidth:"on",
         			forceFullWidth:"on"
         		});


                setTimeout(function(){ revapi.revredraw(); }, 3000);
                // Change main menu links attr
                jQuery('#nav ul li').each(function(index){
                    var attr = jQuery(this).find('a').attr('title');
                    if (typeof attr !== typeof undefined && attr !== false) {
                        jQuery(this).find('a').attr('href','#' + attr).attr('title','');


                    }else{

                    }
                });
         });

      </script>
      <script src="<?php print $path_to_theme; ?>js/nav/jquery.scrollTo.js"></script>
    <style>
        section {
	       padding-top: 50px;
	       padding-bottom: 50px;
        }
    </style>



   </body>

</html>
