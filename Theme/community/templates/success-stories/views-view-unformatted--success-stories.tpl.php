<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<section id="quotes" data-speed="10" data-type="background">
 <div class="container">
    <div class="row">
       <div class="col-md-8 col-md-offset-2 section-heading animated" style="text-align:center" data-animation="fadeInUp" data-animation-delay="0">
          <h1>Success Stories</h1>
          <p class="line">&nbsp;</p>
          <div class="quotes-p">
              
            <?php foreach ($rows as $id => $row): ?>
                <?php print $row; ?>
            <?php endforeach; ?>
              
          </div>
       </div>
    </div>
	 <div class="row" style="text-align:center;margin-top: 30px;"><a href="success-stories" class="view-all">ALL Success Stories</a></div>
 </div>
</section>