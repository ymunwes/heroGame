#ifndef _ORC_H_
#define _ORC_H_

#include "ActionFigure.h"
#include <iostream>

class Orc:public ActionFigure
{

 public:
  Orc(string name="Orc", int health=7, int damage=1,int delay=1300){
    Orc::setName(name);
    Orc::setHealth(health);
    Orc::setDamage(damage);
    Orc::setDelay(delay);
      
  }
  void attack(ActionFigure*);
  bool isAlive();
  int play() {return 0;};
};

#endif
