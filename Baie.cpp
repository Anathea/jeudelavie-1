/* 
 * File:   Baie.cpp
 * Author: natha
 * 
 * Created on 22 mars 2013, 09:00
 */

#include "Baie.h"

Baie::Baie(Monde *_monde) :
    Element(_monde), Ressource(_monde)
{
}

Baie::Baie(const Position& _pos, Monde* _monde) :
    Element(_pos, _monde), Ressource(_pos, _monde)
{
}

Baie::~Baie()
{
}

void
Baie::addRandomBaies(Monde *_monde)
{
  int nbElem = _monde->getParam().getValeurParametre("nb_baie");
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
      _monde->ajouter(new Baie(pos, _monde));
    }
}

void
Baie::agir() const
{

}
