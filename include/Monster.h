#ifndef _MONSTER_H_
#define _MONSTER_H_

#include "ActionFigure.h"
#include <iostream>

class Monster:public ActionFigure
{

 public:
  Monster(string name="Orc", int health=7, int damage=1,int delay=1300){
    Monster::setName(name);
    Monster::setHealth(health);
    Monster::setDamage(damage);
    Monster::setDelay(delay);
      
  }
  void attack(ActionFigure*);
  bool isAlive();
  int play() {return 0;};
};

#endif
