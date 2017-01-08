<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */

 
?>

<section id="clients">
       <div class="row">
           <div class="col-md-12 section-heading animated" style="text-align:center" data-animation="fadeInUp" data-animation-delay="0">
              <h1>Partners</h1>
              <p class="line">&nbsp;</p>
           </div>
        </div>    
         <div class="clients">
              
            <?php foreach ($rows as $id => $row): ?>
                <?php print $row; ?>
            <?php endforeach; ?>
              
         </div>
      </section>