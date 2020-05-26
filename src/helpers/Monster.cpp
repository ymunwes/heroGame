#include "Monster.h"

void Monster::attack(ActionFigure* figure)
{
  if(this->isAlive()){
    damage=this->getDamage();
    std::cout <<this->name <<" attacked "<< figure->getName()<<" reduce "<< damage <<" healths"<<std::endl;
    //updating health for figure
    figure->setHealth(figure->getHealth()-damage);
  }
}
bool Monster::isAlive()
{
  return this->health > 0;

}
