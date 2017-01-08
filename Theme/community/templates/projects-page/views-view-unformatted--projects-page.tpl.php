<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

sss

<section id="team" style="background: none;">
     <div class="container">
        <div class="row">
           <div class="col-md-12 section-heading" style="text-align:center" data-animation="fadeInUp" data-animation-delay="0">
              <h2>Projects</h2>
              <p class="line">&nbsp;</p>
           </div>
        </div>
         

            <?php foreach ($rows as $id => $row): ?>
                <?php print $row; ?>
            <?php endforeach; ?>

     </div>
</section>