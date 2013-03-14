/* 
 * File:   Fixe.h
 * Author: natha
 *
 * Created on 27 février 2013, 10:07
 */

#ifndef FIXE_H
#define FIXE_H

#include <string>
#include "Element.h"
using namespace ::std;

class Fixe : public Element
{
public:
  // Constructeurs
  Fixe();
  Fixe(const Element & _elt);
  Fixe(const Position & _pos, const string & _nom);
  Fixe(const unsigned int & _posX, const unsigned int & _posY,
      const string & _nom);
  virtual
  ~Fixe();

  // Getters & setters

  // Autres méthodes

private:

};

#endif	/* FIXE_H */

