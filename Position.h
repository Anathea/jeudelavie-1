/*
 * Position.h
 *
 *  Created on: 26 févr. 2013
 *      Author: thomas
 */

#ifndef POSITION_H_
#define POSITION_H_

class Position
{
public:
  // Constructeurs
  Position(const unsigned int _posX = 0, const unsigned int _posY = 0);
  virtual
  ~Position();

  // Getters & setters
  void
  setPos(const unsigned int, const unsigned int);
  unsigned int
  getPosX() const;
  unsigned int
  getPosY() const;

  // Autres méthodes

private:
  unsigned int posX;
  unsigned int posY;
};

#endif /* POSITION_H_ */
