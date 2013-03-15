/*
 * RessourceMobile.h
 *
 *  Created on: 28 févr. 2013
 *      Author: thomas
 */

#ifndef RESSOURCEMOBILE_H_
#define RESSOURCEMOBILE_H_
#include "Ressource.h"
#include "Mobile.h"

class RessourceMobile : public Ressource, Mobile
{
public:
  RessourceMobile();
  virtual
  ~RessourceMobile();
};

#endif /* RESSOURCEMOBILE_H_ */
