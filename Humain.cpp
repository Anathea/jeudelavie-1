/* 
 * File:   Humain.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:45
 */

#include "Humain.h"

Humain::Humain(Monde *_monde) :
    Element(_monde), Mobile(_monde), age(0), vie(100), espVie(7000)
{
}

Humain::Humain(const Position &_pos, const string &_nom,
    const unsigned int _vitesse, const unsigned int _vision,
    const unsigned int _age, const unsigned int _vie,
    const unsigned int _espVie, Monde *_monde) :
    Element(_monde), Mobile(Element(_pos, _nom, _monde), _vitesse, _vision), age(_age), vie(
        _vie), espVie(_espVie)
{
  cout << "Création d'un Humain...\n";
}

Humain::~Humain()
{
}

vector<Element *>
Humain::voir(int profondeur, vector<Element *> vecteur) const
{
  // Test d'arret : si on a parcouru tous les niveaux de vision
  if (profondeur == this->getVision())
  {
    for(int i=0 ; i<vecteur.size() ; i++)
      cout << vecteur.at(i) << " - ";
  }
  else
  {
    vector<Element *> vectProv;
    
    vectProv = voir(Position(this->getPos().getX(), this->getPos().getY()-2)); // Nord
    vecteur.insert( vecteur.end(), vectProv.begin(), vectProv.end() );

    voir(Position(this->getPos().getX()+1, this->getPos().getY()+1)); // Nord-Est
    vecteur.insert( vecteur.end(), vectProv.begin(), vectProv.end() );
    
    voir(Position(this->getPos().getX()+1, this->getPos().getY()-1)); // Sud-Est
    vecteur.insert( vecteur.end(), vectProv.begin(), vectProv.end() );
    
    voir(Position(this->getPos().getX(), this->getPos().getY()+2)); // Sud
    vecteur.insert( vecteur.end(), vectProv.begin(), vectProv.end() );
    
    voir(Position(this->getPos().getX()-1, this->getPos().getY()-1)); // Sud-Ouest
    vecteur.insert( vecteur.end(), vectProv.begin(), vectProv.end() );
    
    voir(Position(this->getPos().getX()-1, this->getPos().getY()+1)); // Nord-Ouest
    vecteur.insert( vecteur.end(), vectProv.begin(), vectProv.end() );
    
    profondeur++;
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
Humain::getVie() const
{
  return vie;
}

void
Humain::setVie(const unsigned int _vie)
{
  vie = _vie;
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
