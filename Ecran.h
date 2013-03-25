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
#include <vector>

#include "Position.h"
#include "Monde.h"
#include "Element.h"
#include "Arbre.h"
#include "Baie.h"
#include "Lapin.h"
#include "Sanglier.h"
#include "Humain.h"

using namespace std;

class Ecran {
public:
  Ecran(Monde * _monde);
  virtual ~Ecran();
  
  void clear() const;
  void affMonde(Monde _monde) const;
  void pause() const;
private:
  void affElement(Element *_elt) const;
  void asciiArt(Position _pos, string _ch1, string _ch2, string _ch3) const;
  void asciiArt(Position _pos, string _ch1, string _ch2, string _ch3, int _couleur) const;
  void txtPos(int _x, int _y, string _s) const;
  void txtPos(int _x, int _y, string _s, int color) const;
  void changeColor(int couleur) const;
  
  Monde * monde;
};

#endif	/* ECRAN_H */