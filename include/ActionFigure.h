#ifndef _ACTIONFIGURE_H_
#define _ACTIONFIGURE_H_

#include <stdio.h>
#include <string>

using namespace std;

class ActionFigure
{
 protected:
  int health;
  int damage;
  int delay;
  string name;
 public:
  virtual void attack(ActionFigure*) = 0;
  virtual bool isAlive() =0;
  virtual int play() =0;
  virtual ~ActionFigure() {};
  
  //setters
  void setHealth(int);
  void setDamage(int);
  void setDelay(int);
  void setName(string);
  //getters
  int getHealth();
  int getDamage();
  int getDelay();
  string getName();
  
};

#endif
