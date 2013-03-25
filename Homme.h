/* 
 * File:   Homme.h
 * Author: natha
 *
 * Created on 22 mars 2013, 08:14
 */

#ifndef HOMME_H
#define HOMME_H

#include "Humain.h"

class Homme : public Humain
{
public:
  Homme(Monde *_monde);
  Homme(const Position &_pos, const unsigned int _vitesse,
      const unsigned int _vision, const unsigned int _age,
      const unsigned int _vie, const unsigned int _espVie, Monde *_monde);
  Homme(const Position &_pos, const string &_nom, const unsigned int _vitesse,
      const unsigned int _vision, const unsigned int _age,
      const unsigned int _vie, const unsigned int _espVie, Monde *_monde);
  virtual
  ~Homme();
private:

};

#endif	/* HOMME_H */

