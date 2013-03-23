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
#include <typeinfo>
#include "Position.h"
#include "Monde.h"
#include <vector>
#include "Element.h"
#include "Arbre.h"
#include "Baie.h"
#include "Lapin.h"
#include "Sanglier.h"
#include "Humain.h"

using namespace std;

class Ecran {
public:
  Ecran();
  virtual ~Ecran();
  
  void clear() const;
  void affMonde(Monde _monde) const;
  void pause() const;
private:
  void affElement(Element *_elt) const;
  void txtPos(Position _pos, string _s) const;
  void txtPos(Position _pos, string _s, int color) const;
  void changeColor(int couleur) const;
};

#endif	/* ECRAN_H */