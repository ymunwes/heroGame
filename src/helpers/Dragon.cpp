#include "Dragon.h"

void Dragon::attack(ActionFigure* figure)
{
  if(this->isAlive()){
    damage=this->getDamage();
    std::cout <<this->name <<" attacked "<< figure->getName()<<" reduce "<< damage <<" healths"<<std::endl;
    //updating health for figure
    figure->setHealth(figure->getHealth()-damage>0 ? figure->getHealth()-damage : 0);
  }
}
bool Dragon::isAlive()
{
  return this->health>0;
}
