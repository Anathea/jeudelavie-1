/*
 * Position.h
 *
 *  Created on: 26 févr. 2013
 *      Author: thomas
 */

#ifndef POSITION_H_
#define POSITION_H_
using namespace std;

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

  // Autres méthodes

private:
  unsigned int x;
  unsigned int y;
};

#endif /* POSITION_H_ */
