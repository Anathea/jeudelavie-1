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
  
  void clear();
  
  void affMonde(Monde _monde);
  /*
 * type :
 * 0 | . | case inexistante
 * 1 | * | case vide
 * 2 | H | homme
 * 3 | F | femme
 * 4 | H | Arbre
 * 5 | F | Baie
 * 6 | M | Sanglier
 * 7 | I | Lapin
 */
  void affElement(int type, Position _pos);
  void txtPos(int _x, int _y);
  void pause();
private:
  void changeColor(int couleur);
};

#endif	/* ECRAN_H */