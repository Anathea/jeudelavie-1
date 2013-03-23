/* 
 * File:   Test.h
 * Author: natha
 *
 * Created on 12 mars 2013, 09:15
 */

#ifndef TEST_H
#define	TEST_H

#include "Monde.h"
#include "Mobile.h"
#include "Ecran.h"
#include "Homme.h"
#include "Femme.h"
#include "Sanglier.h"
#include "Lapin.h"

class Test {
public:
  Test(Monde &_mondeTest);
  virtual ~Test();
  
  void testCreation();
  void testAffichage() const;
  void testPosition() const;
  void testDeplacement();
  
private:
  Monde mondeTest;

};

#endif	/* TEST_H */

