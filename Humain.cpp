/* 
 * File:   Humain.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:45
 */

#include "Humain.h"

Humain::Humain(Monde *_monde) :
    Element(_monde), Mobile(_monde), age(0), espVie(7000)
{
}

Humain::Humain(const Position &_pos, const unsigned int _vitesse,
    const unsigned int _vision, const unsigned int _age,
    const unsigned int _espVie, Monde *_monde) :
    Element(_pos, _monde), Mobile(_pos, _vision, _vitesse, _monde), age(_age), espVie(
        _espVie)
{
}

Humain::Humain(const Position &_pos, const string &_nom,
    const unsigned int _vitesse, const unsigned int _vision,
    const unsigned int _age,
    const unsigned int _espVie, Monde *_monde) :
    Element(_pos, _nom, _monde), Mobile(_pos, _nom, _vision, _vitesse, _monde), age(_age), espVie(
        _espVie)
{
}

Humain::~Humain()
{
}

vector<Position>
Humain::voir(Position pos) const
{
  vector<Position> vect;
  vect = rechVoisins(0, pos, vect);
  
  return vect;
}

vector<Position>
Humain::rechVoisins(int profondeur, Position pos, vector<Position> vecteur) const
{
  // Test d'arret : si on a parcouru tous les niveaux de vision
  if (profondeur == 0)
  {
    for(unsigned int i=0 ; i<vecteur.size() ; i++)
      cout << vecteur.at(i) << " - ";
  }
  else
  {
    Position posProv;
/*
    // Si la position est valide, on l'ajoute au vecteur.
    if (this->getMonde()->estValide(pos.getVoisin(NORD)))
      vecteur.push_back(pos.getVoisin(NORD));
    
    if (this->getMonde()->estValide(pos.getVoisin(NORD_EST)))
      vecteur.push_back(pos.getVoisin(NORD_EST));
    
    if (this->getMonde()->estValide(pos.getVoisin(SUD_EST)))
      vecteur.push_back(pos.getVoisin(SUD_EST));
    
    if (this->getMonde()->estValide(pos.getVoisin(SUD)))
      vecteur.push_back(pos.getVoisin(SUD));
    
    if (this->getMonde()->estValide(pos.getVoisin(SUD_OUEST)))
      vecteur.push_back(pos.getVoisin(SUD_OUEST));
    
    if (this->getMonde()->estValide(pos.getVoisin(NORD_OUEST)))
      vecteur.push_back(pos.getVoisin(NORD_OUEST));*/
    profondeur--;
  }

  return vecteur;
}

unsigned int
Humain::getAge() const
{
  return age;
}

void
Humain::setAge(const unsigned int _age)
{
  age = _age;
}

unsigned int
Humain::getEspVie() const
{
  return espVie;
}

void
Humain::setEspVie(const unsigned int _espVie)
{
  espVie = _espVie;
}

void
Humain::agir() const
{

}
