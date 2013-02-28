/* 
 * File:   Monde.h
 * Author: natha
 *
 * Created on 27 février 2013, 10:04
 */

#ifndef MONDE_H
#define MONDE_H
#include <vector>
#include <map>
#include "Position.h"
#include "Element.h"

using namespace std;

class Monde: public vector<Element *>
{
public:
    // Constructeurs
  Monde();
  virtual
  ~Monde();

  // Getters & setters

  // Autres méthodes
  unsigned int estValide(Position _pos) const; // Pour vérifier si la position est valide (renvoie 1) ou non (renvoie 0)

private:
  map<Position, unsigned int> carte;
};

#endif	/* MONDE_H */

