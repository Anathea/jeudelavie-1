/*
 * Ressource.h
 *
 *  Created on: 28 févr. 2013
 *      Author: thomas
 */

#ifndef RESSOURCE_H_
#define RESSOURCE_H_

#include "Element.h"

class Ressource : public virtual Element
{

public:
  Ressource(Monde *_monde);
  Ressource(const Element & _elt);
  Ressource(const Position &_pos, Monde *_monde);
  Ressource(const Position & _pos, const string & _nom, Monde *_monde);
  Ressource(const unsigned int & _posX, const unsigned int & _posY,
      const string & _nom, Monde *_monde);

  void
  agir() const;

  virtual
  ~Ressource();
};

#endif /* RESSOURCE_H_ */
