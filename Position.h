/*
 * Position.h
 *
 *  Created on: 26 févr. 2013
 *      Author: thomas
 */

#ifndef POSITION_H_
#define POSITION_H_
using namespace std;

#include <iostream>


class Position
{
public:
  // Constructeurs
  Position(const unsigned int _x = 0, const unsigned int _y = 0);
  virtual
  ~Position();

  // Getters & setters
  void
  setPos(const unsigned int, const unsigned int);
  unsigned int getX() const;
  unsigned int getY() const;
  bool operator < (const Position & p2) const;
  void
  setX(unsigned int x);
  void
  setY(unsigned int y);

  // Autres méthodes
  void afficher();
  bool estValide();

private:
  unsigned int x;
  unsigned int y;
};

ostream & operator << (ostream & Out, const Position &pos);

#endif /* POSITION_H_ */
