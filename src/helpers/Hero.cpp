#include "Hero.h"


void Hero::attack(ActionFigure* figure)
{
  
  if(figure->isAlive()){
    damage=this->getDamage();
    figure->setHealth(figure->getHealth()-damage>0 ? figure->getHealth()-damage : 0);
    std::cout <<this->name<<" hits " << figure->getName()<<std::endl;
    std::cout << figure->getName() <<" health is "<< figure->getHealth()<<std::endl;
  }else{
    std::cout << figure->getName() << " is already dead..."<<std::endl;
  }
  
}

bool Hero::isAlive()
{
  return this->health>0;
}
int Hero::play()
{
  int play=0;
  
  if(kbhit()){
    
    play=int(getchar()) - 48;
  }
  return play;
}
int Hero::kbhit(void)
{
  struct termios oldt, newt;
  int ch;
  int oldf;

  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
  fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

  ch = getchar();

  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  fcntl(STDIN_FILENO, F_SETFL, oldf);

  if(ch != EOF)
  {
    ungetc(ch, stdin);
    return 1;
  }

  return 0;
}
