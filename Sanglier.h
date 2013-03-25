/* 
 * File:   Sanglier.h
 * Author: natha
 *
 * Created on 22 mars 2013, 09:00
 */

#ifndef SANGLIER_H
#define	 SANGLIER_H

#include "Ressource.h"
#include "Mobile.h"

class Sanglier : public Ressource, public Mobile
{
public:
  Sanglier(Monde *_monde);
  Sanglier(const Position &_pos, const unsigned int _vitesse, Monde *_monde);
  Sanglier(const Position &_pos, const string &_nom,
      const unsigned int _vitesse, Monde *_monde);
  virtual
  ~Sanglier();
private:

};

#endif	/* SANGLIER_H */

