/* 
 * File:   Humain.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:45
 */

#include "Humain.h"


Humain::Humain(Monde *_monde) :
    Element(_monde), Mobile(_monde)
{
  age = _monde->getRandomInt(_monde->getParam().getValeurParametre("min_age"), _monde->getParam().getValeurParametre("max_age"));
  espVie = _monde->getRandomInt(_monde->getParam().getValeurParametre("min_esp_vie"), _monde->getParam().getValeurParametre("max_esp_vie"));
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
/*
vector<Position>
Humain::voir() const
{
  vector<Position> vect;
  vect.push_back(this->getPos().);
  vect = rechVoisins(3, this->getPos(), vect);
  
  return vect;
}
*/

/*
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
    Position p;
    
    // Si la position est valide, on l'ajoute au vecteur.
    p = pos.getVoisin(_NORD);
    if (this->getMonde()->estValide(p) && p.dansVecteur(vecteur))
    {
      cout << "_NORD" << endl;
      vecteur.push_back(p); // On insère cette position dans le vecteur
      //vecteur = rechVoisins(profondeur, p, vecteur);
    }
    
    p = pos.getVoisin(NORD_EST);
    if (this->getMonde()->estValide(p) && p.dansVecteur(vecteur))
    {
      cout << "NORD_EST" << endl;
      vecteur.push_back(p);
      //vecteur = rechVoisins(profondeur, p, vecteur);
    }
    
    p = pos.getVoisin(SUD_EST);
    if (this->getMonde()->estValide(p) && p.dansVecteur(vecteur))
    {
      cout << "SUD_EST" << endl;
      vecteur.push_back(p);
      //vecteur = rechVoisins(profondeur, p, vecteur);
    }
    
    p = pos.getVoisin(_SUD);
    if (this->getMonde()->estValide(p) && p.dansVecteur(vecteur))
    {
      cout << "_SUD" << endl;
      vecteur.push_back(p);
      //vecteur = rechVoisins(profondeur, p, vecteur);
    }
    
    p = pos.getVoisin(_SUD);
    if (this->getMonde()->estValide(p) && p.dansVecteur(vecteur))
    {
      cout << "SUD_OUEST" << endl;
      vecteur.push_back(p);
      //vecteur = rechVoisins(profondeur, p, vecteur);
    }
    
    p = pos.getVoisin(NORD_OUEST);
    if (this->getMonde()->estValide(p) && p.dansVecteur(vecteur))
    {
      cout << "NORD_OUEST" << endl;
      vecteur.push_back(p);
      //vecteur = rechVoisins(profondeur, p, vecteur);
    }
    
    cout << vecteur.back().toString();
    profondeur--;
  }
  
  for (unsigned int i=0 ; i< vecteur.size() ; i++)
    cout << vecteur.at(i) << endl;
  cout << "taille vecteur dans rechVoisins : " << vecteur.size() << endl;
  return vecteur;
}
*/
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
