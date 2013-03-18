/* 
 * File:   Ecran.cpp
 * Author: natha
 * 
 * Created on 15 mars 2013, 11:31
 */

#include "Ecran.h"
#include "Position.h"

Ecran::Ecran()
{
  //this->fondNoir();
  this->clear();
}

Ecran::~Ecran()
{}

void Ecran::clear()
{
  unsigned int tailleX = 10; // à changer : tailleX/Y doit être dans le fichier paramètres
  unsigned int tailleY = 10;
  
  cout << "\033[H\033[2J";
  Position pos;
  for(unsigned int x=0 ; x<tailleX+1 ; x++)
    for(unsigned int y=0 ; y<tailleY+2 ; y++)
    {
      pos = Position(x, y);
      if (pos.estValide())
        affElement(1, pos);
      else
        affElement(0, pos);
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

void Ecran::fondNoir()
{
  changeColor(10);
}

void Ecran::txtPos(int _x, int _y)
{
  cout << "\033[" << _y << ";" << _x << "H";
}

void Ecran::pause()
{
  sleep(5); // à changer : durée de pause est un paramètre
}