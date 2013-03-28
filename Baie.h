/* 
 * File:   Baie.h
 * Author: natha
 *
 * Created on 22 mars 2013, 09:00
 */

#ifndef BAIE_H
#define	 BAIE_H

#include "Ressource.h"

class Baie : public Ressource
{
public:
  Baie(Monde *_monde);
  Baie(const Position &_pos, Monde *_monde);
  virtual
  ~Baie();

  static void
  addRandomBaies(Monde *_monde);
  void
  agir();

private:

};

#endif	/* BAIE_H */

