<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>


<section id="projects-page">
     <div class="container">
        <div class="row">
           <div class="col-md-12 section-heading animated" style="text-align:center" data-animation="fadeInUp" data-animation-delay="0">
              <h2 style="margin-top:  margin-top: 50px;">Featured Business Ideas</h2>
              <p class="line">&nbsp;</p>
           </div>
        </div>
         
         
         <div class="" id="our-team2">

            <?php foreach ($rows as $id => $row): ?>
                <?php print $row; ?>
            <?php endforeach; ?>
             
        </div>
     </div>
</section>