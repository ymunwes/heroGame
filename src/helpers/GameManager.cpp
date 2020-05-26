#include "GameManager.h"

void GameManager::Setup()
{
}

void GameManager::Input()
{
  int play =0;
  play = hero->play();
  if (play >0) PrintStatus();
  if(play == 1){
    hero->attack(dragon);
  }else if(play == 2){
    hero->attack(orc);
  }
  
  //check for win
  if (!dragon->isAlive() and !orc->isAlive()) gameOver = true;
  
}

void GameManager::Logic(int duration)
{
  if(duration > dragonHitCounter * dragon->getDelay())
    {
      dragonHitCounter++;
      dragon->attack(hero);
    }
  if(duration > orcHitCounter * orc->getDelay())
    {
      orcHitCounter++;
      orc->attack(hero);
    }
  //check if lost
  if(!hero->isAlive()) gameOver = true;
}
  
void GameManager::Run()
{
  start = std::clock();
  PrintStatus();
  std::cout<<"[1] - attack Dragon, [2]- attack Orc..."<<std::endl;

  //start game loop
  while(!gameOver)
    {
      //get total time in ms
      duration =int( ( std::clock() - start ) / ((double) CLOCKS_PER_SEC/1000.));
      //get user input
      Input();
      //check and attack from monster if needed
      Logic(duration);
    }

  //last print of win or lose
  if(hero->isAlive())
    {
      std::cout<<"Hero is the winner!"<<std::endl;
    }else{
    std::cout<<"You lost :("<<std::endl;
  }
    
}

void GameManager::PrintStatus()
{
  system("clear");
  std::cout<<"[1] - attack Dragon, [2]- attack Orc..."<<std::endl;
  std::cout << "Score: Hero-"<< hero->getHealth()<< ", Dragon:" << dragon->getHealth()<< ", Orc:" <<orc->getHealth()<< std::endl;
  

}
