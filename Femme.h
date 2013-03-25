/* 
 * File:   Femme.h
 * Author: natha
 *
 * Created on 22 mars 2013, 08:14
 */

#ifndef FEMME_H
#define FEMME_H

#include "Humain.h"

class Femme : public Humain
{
public:
  Femme(Monde *_monde);
  Femme(const Position &_pos, const unsigned int _vitesse,
      const unsigned int _vision, const unsigned int _age,
      const unsigned int _vie, const unsigned int _espVie, Monde *_monde);
  Femme(const Position &_pos, const string &_nom, const unsigned int _vitesse,
        const unsigned int _vision, const unsigned int _age,
        const unsigned int _vie, const unsigned int _espVie, Monde *_monde);
  virtual
  ~Femme();
private:

};

#endif	/* FEMME_H */

