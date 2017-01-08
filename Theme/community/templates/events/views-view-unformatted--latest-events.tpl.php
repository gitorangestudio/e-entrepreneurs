<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<section id="blog">
         <div class="container">
            <div class="row">
               <div class="col-md-12 section-heading animated" style="text-align:center" data-animation="fadeInUp" data-animation-delay="0">
                  <h1>Latest Events</h1>
                  <p class="line">&nbsp;</p>
               </div>
            </div>
            <div class="row">
              
            <?php foreach ($rows as $id => $row): ?>
                <?php print $row; ?>
            <?php endforeach; ?>
              
            </div>
            <div class="row" style="text-align:center;margin-top: 30px;"><a href="events" class="view-all">ALL Events</a></div>
         </div>
      </section>