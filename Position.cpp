/*
 * Position.cpp
 *
 *  Created on: 26 févr. 2013
 *      Author: thomas
 */

#include <vector>

#include "Position.h"


Position::Position() :
  x(0), y(0)
{
}

Position::Position(const int _x, const int _y) :
    x(_x), y(_y)
{
}

Position::~Position()
{
}

bool
Position::isEqual(Position pos) const
{
  return (x == pos.getX() && y == pos.getY());
}

// Permet de savoir si une position se trouve dans un vecteur de Position
bool
Position::dansVecteur(vector<Position> v) const
{
  bool trouve = false;
  unsigned int i = 0;
  
  while ((trouve == false) && i<v.size())
  {
    if (this->isEqual(v.at(i)))
      trouve = true;
    i++;
  }
  
  return trouve;
}

int
Position::getX() const
{
  return this->x;
}

int
Position::getY() const
{
  return this->y;
}

void
Position::setX(int _x)
{
  this->x = _x;
}

void
Position::setY(int _y)
{
  this->y = _y;
}

void
Position::setPos(const int _x, const int _y)
{
  this->x = _x;
  this->x = _y;
}

bool
Position::operator <(const Position & p2) const
{
  return this->x < p2.x || (this->x == p2.x && this->y < p2.y);
}

bool
Position::operator ==(const Position& p2) const
{
  return (this->x == p2.getX() && this->y == p2.getY());
}

bool
Position::operator !=(const Position& p2) const
{
  return !(*(this) == p2);
}

string
Position::toString() const
{
  string strX = string(1, '0'+x);
  string strY = string(1, '0'+y);
  
  string s = "[";
  s.append(strX);
  s.append(" ; ");
  s.append(strY);
  s.append("]");
  
  return s;
}

ostream&
operator <<(ostream& Out, const Position& pos)
{
  Out << "(" << pos.getX() << ";" << pos.getY() << ")";
  return Out;
}


bool
Position::estValide () const
{
  return (((this->x%2 == 0 && this->y%2 == 0) || (this->x%2 != 0 && this->y%2 != 0)));
}

