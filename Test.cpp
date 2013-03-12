/* 
 * File:   Test.cpp
 * Author: natha
 * 
 * Created on 12 mars 2013, 09:15
 */

#include "Test.h"
#include "Monde.h"
#include <iostream>
using namespace ::std;

Test::Test()
{
  testPosition();
}

Test::Test(const Test & orig)
{}

Test::~Test()
{}

void Test::testPosition()
{
  Position posOK(1,3);
  Position posNOK(1,4);
  
  Monde monde;
  if (monde.estValide(posOK))
    cout << "OK : position [1,3] valide\n";

  if (!monde.estValide(posNOK))
    cout << "OK : position [1,4] invalide\n";
}