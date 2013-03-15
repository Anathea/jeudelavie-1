/* 
 * File:   Mobile.h
 * Author: natha
 *
 * Created on 27 février 2013, 10:07
 */

#ifndef MOBILE_H
#define	MOBILE_H

#include <string>
#include "Element.h"
#include "Monde.h"

using namespace ::std;

class Mobile
{
public:
  // Constructeurs

  Mobile();
  Mobile(const unsigned int _vision, const unsigned int _vitesse);

  virtual
  ~Mobile();

  // Getters & setters
  unsigned int
  getVitesse() const;
  void
  setVitesse(const unsigned int _vitesse);
  unsigned int
  getVision() const;
  void
  setVision(const unsigned int _vision);

  //Autres méthodes
  void seDeplacer(const Position _pos);

private:
  unsigned int vision;
  unsigned int vitesse;
};

#endif	/* MOBILE_H */
