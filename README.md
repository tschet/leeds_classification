# Leeds Classification #
This is a Drupal 7 module that installs a variation of the [Leeds Equipment 
Classification system](http://ris.leeds.ac.uk/info/31/research_equipment_and_infrastructure/162/equipment_classification). 

All credit for the system goes to the team at Leeds. All mistakes in this 
usage of the system are mine.

I have kept changes to the classification terms to a minimum. For organizational 
and development purposes, I have made duplicate classification term names unique. 
In most cases I appended the parent term name, or a portion of it to the term in 
order to make it unique. For instance, the term "Electrical" was a child term 
of "Imaging", but was not unique. In order to differentiate the "Imaging / 
Electrical" term from "Sample Measurement/Electrical". I changed the name to 
"Electrical (Imaging)". 

Could be used with [REI Entities](https://gitlab.com/tschet/rei_entities), 
but could easily be used without as well. The REI Entities repository is 
currently private, but will be made public when completed. Ask about it it you 
want access and it isn't yet public.

https://github.com/tschet/leeds_classification

## INSTALLATION ##
Install as usual, see http://drupal.org/node/895232 for further information.

Leeds Classification Panels and Views (leeds_classificaiton_panels) and Leeds 
Classification Feeds Importer add functionality but are not required. Use as 
needed. The Feeds Importer module could be activated and deactivated as 
necessary if desired.
 
## CONFIGURATION ##
There are no specific configuration settings for the Leeds Classification module.
 
## CONTACT ##
Current maintainer:
Douglas Tschetter - [tschet](https://www.drupal.org/u/tschet)
[Riven Design](http://rivendesign.com)

## SPONSOR ##
This project was sponsored the [NDSU Research and Tech Park](http://ndsuresearchpark.com).