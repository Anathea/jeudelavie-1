/* 
 * File:   Lapin.h
 * Author: natha
 *
 * Created on 22 mars 2013, 09:00
 */

#ifndef LAPIN_H
#define LAPIN_H

#include "Ressource.h"
#include "Mobile.h"

class Lapin : public Ressource, public Mobile
{
public:
  Lapin(Monde *_monde);
  Lapin(const Position &_pos, const unsigned int _vitesse, Monde *_monde);
  Lapin(const Position &_pos, const string &_nom, const unsigned int _vitesse,
      Monde *_monde);
  virtual
  ~Lapin();

  static void
  addRandomLapins(Monde *_monde);
  void
  agir();

private:

};

#endif	/* LAPIN_H */

