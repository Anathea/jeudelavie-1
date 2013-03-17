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
#include "Position.h"

using namespace std;

class Ecran {
public:
  Ecran();
  virtual ~Ecran();
  
  void clear();
  void affElement(int type, Position _pos);
  void fondNoir();
  void txtPos(int _x, int _y);
  void pause();
private:
  void changeColor(int couleur);
};

#endif	/* ECRAN_H */

