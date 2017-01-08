<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>


 <section id="slider">
     <div class="tp-banner-container">
         <div class="tp-banner">
            <ul>

                <?php foreach ($rows as $id => $row): ?>
                    <?php print $row; ?>
                <?php endforeach; ?>

            </ul>    
            <div class="tp-bannertimer"></div>
           </div>                     
       </div>
</section>  

