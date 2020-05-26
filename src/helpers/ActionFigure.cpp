#include "ActionFigure.h"

void ActionFigure::setHealth(int health)
{
  this->health = health;
}

void ActionFigure::setDamage(int damage)
{
  this->damage = damage;
}

void ActionFigure::setDelay(int delay)
{
  this->delay = delay;
}
void ActionFigure::setName(string name)
{
  this->name = name;
}

int ActionFigure::getHealth()
{
  return this->health;
}

int ActionFigure::getDamage()
{
  return this->damage;
}

int ActionFigure::getDelay()
{
  return this->delay;
}

string ActionFigure::getName()
{
  return this->name;
}
