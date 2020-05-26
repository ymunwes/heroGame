#include "Orc.h"

void Orc::attack(ActionFigure* figure)
{
  if(this->isAlive()){
    damage=this->getDamage();
    std::cout <<this->name <<" attacked "<< figure->getName()<<" reduce "<< damage <<" healths"<<std::endl;
    //updating health for figure
    figure->setHealth(figure->getHealth()-damage);
  }
}
bool Orc::isAlive()
{
  return this->health > 0;

}
