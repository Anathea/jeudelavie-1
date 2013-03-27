/* 
 * File:   Lapin.cpp
 * Author: natha
 * 
 * Created on 22 mars 2013, 09:00
 */

#include "Lapin.h"

Lapin::Lapin(Monde *_monde) :
    Element(_monde), Ressource(_monde), Mobile(_monde)
{
}

Lapin::Lapin(const Position &_pos, const unsigned int _vitesse, Monde* _monde) :
    Element(_pos, _monde), Ressource(_pos, _monde), Mobile(_pos, _vitesse,
        _monde)
{
}

Lapin::Lapin(const Position& _pos, const string& _nom,
    const unsigned int _vitesse, Monde* _monde) :
    Element(_pos, _nom, _monde), Ressource(_pos, _nom, _monde), Mobile(_pos,
        _vitesse, _monde)
{
}

Lapin::~Lapin()
{
}

void
Lapin::addRandomLapins(Monde *_monde)
{
  int nbElem = _monde->getParam().getValeurParametre("nb_lapin");
  Position pos;
  for (int i = 0; i < nbElem; i++)
    {
      // On cherche une position inocuppée
      do
        {
          pos = _monde->posAleatoire();
        }
      while (!_monde->estValide(pos));
      // On ajoute dans le monde
      _monde->ajouter(new Lapin(pos, 1, _monde));
    }
}

void
Lapin::agir() const
{

}

