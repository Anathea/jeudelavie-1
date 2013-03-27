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
#include <string>
#include <vector>

class Position
{
public:
  // Constructeurs
  Position();
  Position(const int _x, const int _y);
  virtual
  ~Position();

  // Getters & setters
  bool dansVecteur(vector<Position>) const;
  bool isEqual(Position pos) const;
    
  void
  setPos(const int _x, const int _y);
  int getX() const;
  int getY() const;
  bool operator < (const Position & p2) const;
  void
  setX(int _x);
  void
  setY(int _y);

  // Autres méthodes
  string toString() const;
  bool estValide() const;

private:
  int x;
  int y;
};

ostream & operator << (ostream & Out, const Position &pos);

#endif /* POSITION_H_ */
