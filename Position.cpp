/*
 * Position.cpp
 *
 *  Created on: 26 févr. 2013
 *      Author: thomas
 */

#include "Position.h"


Position::Position(const unsigned int _x, const unsigned int _y) :
    x(_x), y(_y)
{
}

Position::~Position()
{
}

unsigned int
Position::getX() const
{
  return this->x;
}

unsigned int
Position::getY() const
{
  return this->y;
}

void
Position::setPos(const unsigned int _x, const unsigned int _y)
{
  this->x = _x;
  this->x = _y;
}

bool
Position::operator <(const Position & p2) const
{
  return this->x < p2.x || (this->x == p2.x && this->y < p2.y);
}


void
Position::afficher()
{
  cout << "X : " << getX() << " | Y : " << getY() << endl;
}

ostream&
operator <<(ostream& Out, const Position& pos)
{
  Out << "(" << pos.getX() << ";" << pos.getY() << ")";
  return Out;
}
