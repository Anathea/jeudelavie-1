/* 
 * File:   AffConsole.h
 * Author: natha
 *
 * Created on 15 mars 2013, 11:31
 */

#ifndef ECRAN_H
#define	ECRAN_H
#include <unistd.h>
#include <iostream>
#include <sstream>
using namespace std;

class Ecran {
public:
  Ecran();
  virtual ~Ecran();
  
  void clear();
  void txtColor(string txt, int couleur);
  void pause();
private:
  void changeColor(int couleur);
};

#endif	/* ECRAN_H */

