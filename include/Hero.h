#ifndef _HERO_H_
#define _HERO_H_

#include "ActionFigure.h"
#include <iostream>

#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>


class Hero:public ActionFigure
{
 public:
  
  Hero(string name="Hero", int health=40, int damage=2){
    Hero::setName(name);
    Hero::setDamage(damage);
    Hero::setHealth(health);
      
  }
  void attack(ActionFigure*);
  bool isAlive();
  int play();
  int kbhit(void);
};

#endif
