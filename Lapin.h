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
  virtual
  ~Lapin();
private:

};

#endif	/* LAPIN_H */

