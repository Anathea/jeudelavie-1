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

class Test {
public:
  Test(Monde &_mondeTest);
  virtual ~Test();
  
  void testPosition();
  void testDeplacement();
  
private:
  Monde mondeTest;

};

#endif	/* TEST_H */

