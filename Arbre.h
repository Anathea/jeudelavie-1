/* 
 * File:   Arbre.h
 * Author: natha
 *
 * Created on 22 mars 2013, 09:00
 */

#ifndef ARBRE_H
#define ARBRE_H

#include "Ressource.h"

class Arbre : public Ressource
{
public:
  Arbre(Monde *_monde);
  Arbre(const Position &_pos, Monde *_monde);
  virtual
  ~Arbre();

  static void
  addRandomArbres(Monde *_monde);

  void
  agir();

private:

};

#endif	/* ARBRE_H */

