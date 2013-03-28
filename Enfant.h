/*
 * Enfant.h
 *
 *  Created on: 27 mars 2013
 *      Author: thomas
 */

#ifndef ENFANT_H_
#define ENFANT_H_

#include "Humain.h"
#include "Femme.h"
#include "Homme.h"

class Enfant : public Humain
{

public:
  Enfant(Monde *_monde);
  virtual
  ~Enfant();

  void devientAdulte();
private:
  int age;
};

#endif /* ENFANT_H_ */
