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
#include "Position.h"
#include "Parametres.h"

class Monde;
// Contre problème d'inclusion cyclique

class Element
{
public:
  // Constructeurs
  Element(Monde *_monde);
  Element(const Position &_pos, Monde *_monde);
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
  static string
  getRandomName();

  // Autres méthodes
  void
  afficher() const;
  virtual void
  agir() const = 0;

private:
  Position pos;
  string nom;
  Monde *monde;
  static const string tnames[];
  static const vector<string> names;

};

#endif	/* ELEMENT_H */
