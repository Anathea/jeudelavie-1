/*
 * RessourceFixe.h
 *
 *  Created on: 28 févr. 2013
 *      Author: thomas
 */

#ifndef RESSOURCEFIXE_H_
#define RESSOURCEFIXE_H_
#include "Ressource.h"
#include "Fixe.h"

using namespace std;

class RessourceFixe : public Ressource, public Fixe
{
public:
  RessourceFixe();
  virtual
  ~RessourceFixe();
};

#endif /* RESSOURCEFIXE_H_ */
