<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>



<section id="team">
     <div class="container">
        <div class="row">
           <div class="col-md-12 section-heading animated" style="text-align:center" data-animation="fadeInUp" data-animation-delay="0">
              <h2>Featured Business Ideas</h2>
              <p class="line">&nbsp;</p>
           </div>
        </div>
         
         
         <div class="owl-carousel" id="our-team">

            <?php foreach ($rows as $id => $row): ?>
                <?php print $row; ?>
            <?php endforeach; ?>
             
        </div>
         <div class="row" style="text-align:center;margin-top: 31px;">
             <a class="view-all" href="business-ideas">All Business Ideas</a>
         
         </div>
     </div>
</section>