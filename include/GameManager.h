#ifndef _GAMEMANAGER_H_
#define _GAMEMANAGER_H_

#include <stdio.h>
#include <string>
#include "ActionFigure.h"
#include "Dragon.h"
#include "Hero.h"
#include "Orc.h"
#include <unistd.h>
//#include <curses.h>
#include <ctime>

using namespace std;

class GameManager
{
 private:
  bool gameOver;
  ActionFigure *hero, *orc, *dragon;
  int dragonHitCounter, orcHitCounter;
  std::clock_t start;
  double duration;
  
 public:
  GameManager()
  {
    gameOver = false;
    hero = new Hero();
    orc = new Orc();
    dragon = new Dragon();
    dragonHitCounter = 1;
    orcHitCounter = 1;
  }
  ~GameManager()
  {
    delete hero;
    delete orc;
    delete dragon;
  }
  void Setup();
  void Input();
  void Logic(int);
  void Run();
  void PrintStatus();

  
};

#endif
