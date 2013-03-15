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
  cout << "\033[H\033[2J";
}

void Ecran::changeColor(int couleur)
{
  std::stringstream ss;
  ss << couleur + 30;
  cout << "\033[" << ss.str() << "m";
}

void Ecran::txtColor(string txt, int couleur)
{
  changeColor(couleur);
  cout << txt;
  changeColor(0);
}

void Ecran::pause()
{
  sleep(5); // à changer !
}