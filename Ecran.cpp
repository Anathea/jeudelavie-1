/* 
 * File:   Ecran.cpp
 * Author: natha
 * 
 * Created on 15 mars 2013, 11:31
 */
#include "Ecran.h"

Ecran::Ecran()
{
  this->clear();
}

Ecran::~Ecran()
{}

void Ecran::clear()
{
  int tailleX = 10; // à changer : tailleX/Y doit être dans le fichier paramètres
  int tailleY = 10;
  
  cout << "\033[H\033[2J";
  Position pos;
  for(int x=0 ; x<tailleX+1 ; x++)
    for(int y=0 ; y<tailleY+2 ; y++)
    {
      pos = Position(x, y);
      if (pos.estValide())
        affElement(1, pos);
      else
        affElement(0, pos);
    }
}

void Ecran::affMonde(Monde _monde)
{
  for(long unsigned int i=0 ; i<_monde.size() ; i++)
  {
    Position pos = _monde.at(i)->getPos();
    int type = 0;
    if (pos.estValide())
    {
      if(typeid(_monde.at(i)) == typeid(Humain))
        cout << "humain\n";//type = 2;
      /*else if(typeid(_monde.at(i)) == typeid(Femme))
        type = 3;*/
      else if(typeid(_monde.at(i)) == typeid(Fixe))
        cout << "fixe\n";//type = 4;
      else if(typeid(_monde.at(i)) == typeid(Mobile))
        cout << "mobile\n";//type = 5;
      else
        cout << "Aucun\n";
    }
    else
      cout << "\n!! Affichage d'un élément à une position non valide !!\n";
    
    affElement(type, pos);
  }
}
/*
 * type :
 * 0 | . | case inexistante
 * 1 | * | case vide
 * 2 | H | homme
 * 3 | F | femme
 * 4 | I | ressource immobile
 * 5 | M | ressource mobile
 */
void Ecran::affElement(int _type, Position _pos)
{
  txtPos(_pos.getX(), _pos.getY());
  changeColor(_type);
  
  switch(_type)
  {
    case 0 : cout << "."; break;
    case 1 : cout << "*"; break;
    case 2 : cout << "H"; break;
    case 3 : cout << "F"; break;
    case 4 : cout << "I"; break;
    case 5 : cout << "M"; break;
    default : break;
  }

  txtPos(0, 0);
  changeColor(0);
}

void Ecran::changeColor(int couleur)
{
  std::stringstream ss;
  ss << couleur + 30;
  cout << "\033[" << ss.str() << "m";
}

void Ecran::txtPos(int _x, int _y)
{
  cout << "\033[" << _y << ";" << _x << "H";
}

void Ecran::pause()
{
  sleep(2); // à changer : durée de pause est un paramètre
}
