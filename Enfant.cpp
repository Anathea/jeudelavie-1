/*
 * Enfant.cpp
 *
 *  Created on: 27 mars 2013
 *      Author: thomas
 */

#include "Enfant.h"
//#include "Parametres.h"

Enfant::Enfant(Monde *_monde) : Humain(_monde), age(0)
{
  // TODO Auto-generated constructor stub

}

Enfant::~Enfant()
{
  // TODO Auto-generated destructor stub
}

void Enfant::devientAdulte(){
  if( getMonde()->getParam().getValeurParametre("temps_enfant")== age ){

  }
}
