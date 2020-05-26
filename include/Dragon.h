#ifndef _DRAGON_H_
#define _DRAGON_H_

#include "ActionFigure.h"
#include <iostream>

class Dragon:public ActionFigure
{

 public:
  Dragon(string name="Dragon", int health=20, int damage=3,int delay=2600){
    Dragon::setName(name);
    Dragon::setHealth(health);
    Dragon::setDamage(damage);
    Dragon::setDelay(delay);
      
  }
  void attack(ActionFigure*);
  bool isAlive();
  int play() {return 0;};
};

#endif
