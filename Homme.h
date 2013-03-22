/* 
 * File:   Homme.h
 * Author: natha
 *
 * Created on 22 mars 2013, 08:14
 */

#ifndef HOMME_H
#define HOMME_H

#include "Humain.h"

class Homme : public Humain
{
public:
  Homme(Monde *_monde);
  virtual
  ~Homme();
private:

};

#endif	/* HOMME_H */

