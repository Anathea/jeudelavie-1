/* 
 * File:   Element.h
 * Author: natha
 *
 * Created on 27 février 2013, 10:05
 */

#ifndef ELEMENT_H
#define ELEMENT_H

#include <string>
#include <iostream>
#include "Monde.h"
#include "Position.h"

class Monde;

class Element
{
public:
  // Constructeurs
  Element(Monde *_monde);
  Element(const Position & _pos, const string & _nom, Monde *_monde);
  Element(const unsigned int _posX, const unsigned int _posY, const string _nom,
      Monde *_monde);
  virtual
  ~Element();

  // Getters & setters
  string
  getNom() const;
  void
  setNom(const string _nom);
  const Position&
  getPos() const;
  void
  setPos(const Position _pos);
  Monde *
  getMonde() const;

  // Autres méthodes
  void
  afficher() const;
  //virtual void
  //agir() const;

private:
  Position pos;
  string nom;
  Monde *monde;

};

#endif	/* ELEMENT_H */
