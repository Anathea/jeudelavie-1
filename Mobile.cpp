/* 
 * File:   Mobile.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:07
 */

#include "Mobile.h"

Mobile::Mobile(Monde *_monde) :
    Element(_monde), vision(1), vitesse(1)
{
}

Mobile::Mobile(const Position& _pos, Monde* _monde) :
    Element(_pos, _monde), vision(1), vitesse(1)
{
}

Mobile::Mobile(const Position &_pos, const unsigned int _vitesse, Monde *_monde) :
    Element(_pos, _monde), vision(1), vitesse(_vitesse)
{

}

Mobile::Mobile(const Position& _pos, const unsigned int _vision,
    const unsigned int _vitesse, Monde* _monde) :
    Element(_pos, _monde), vision(_vision), vitesse(_vitesse)
{
}

Mobile::Mobile(const Position & _pos, const string & _nom,
    const unsigned int _vision, const unsigned int _vitesse, Monde *_monde) :
    Element(_pos, _nom, _monde), vision(_vision), vitesse(_vitesse)
{
}

Mobile::~Mobile()
{
}

Element *
Mobile::getVoisin(Direction dir) const
{
  Element *voisin = NULL;
  Position pos;
  
  switch (dir)
  {
    case NORD:
      pos = Position(this->getPos().getX(), this->getPos().getY()-2);
      if (this->getMonde()->getElbyPos(pos) != NULL)
        voisin = this->getMonde()->getElbyPos(pos);
    break;
    
    case NORDEST:
      pos = Position(this->getPos().getX()+1, this->getPos().getY()-1);
      if (this->getMonde()->getElbyPos(pos) != NULL)
        voisin = this->getMonde()->getElbyPos(pos);
    break;
    
    case SUDEST:
      pos = Position(this->getPos().getX()+1, this->getPos().getY()+1);
      if (this->getMonde()->getElbyPos(pos) != NULL)
        voisin = this->getMonde()->getElbyPos(pos);
    break;
    
    case SUD:
      pos = Position(this->getPos().getX(), this->getPos().getY()+2);
      if (this->getMonde()->getElbyPos(pos) != NULL)
        voisin = this->getMonde()->getElbyPos(pos);
    break;
    
    case SUDOUEST:
      pos = Position(this->getPos().getX()-1, this->getPos().getY()+1);
      if (this->getMonde()->getElbyPos(pos) != NULL)
        voisin = this->getMonde()->getElbyPos(pos);
    break;
    
    case NORDOUEST:
      pos = Position(this->getPos().getX()-1, this->getPos().getY()-1);
      if (this->getMonde()->getElbyPos(pos) != NULL)
        voisin = this->getMonde()->getElbyPos(pos);
    break;
    
    default:
      cout << "Orientation invalide" << endl;
    break;
  }
  return voisin;
}

unsigned int
Mobile::getVitesse() const
{
  return vitesse;
}

void
Mobile::setVitesse(const unsigned int _vitesse)
{
  vitesse = _vitesse;
}

unsigned int
Mobile::getVision() const
{
  return vision;
}

void
Mobile::setVision(const unsigned int _vision)
{
  vision = _vision;
}

bool
Mobile::seDeplacer(const Direction _dir)
{
  Position curPos = getPos();
  Position nouvPos(curPos);
  Monde *monde = this->getMonde();
  unsigned int indice = monde->getMap().at(curPos);
  bool possible;

  switch (_dir)
    {
  case NORD:
    nouvPos.setY(nouvPos.getY() - 2);
    break;
  case NORDEST:
    nouvPos.setX(nouvPos.getX() + 2);
    nouvPos.setY(nouvPos.getY() - 2);
    break;
  case SUDEST:
    nouvPos.setX(nouvPos.getX() + 2);
    nouvPos.setY(nouvPos.getY() + 2);
    break;
  case SUD:
    nouvPos.setY(nouvPos.getY() + 2);
    break;
  case SUDOUEST:
    nouvPos.setX(nouvPos.getX() - 2);
    nouvPos.setY(nouvPos.getY() + 2);
    break;
  case NORDOUEST:
    nouvPos.setX(nouvPos.getX() - 2);
    nouvPos.setY(nouvPos.getY() - 2);
    break;
  default:
    break;
    }
  possible = monde->estValide(nouvPos);
  if (possible)
    {
      // Modification de la position de l'élément
      setPos(nouvPos);
      // Modification de la map
      monde->getMap().erase(curPos);
      monde->getMap().insert(pair<Position, unsigned int>(nouvPos, indice));

    }

  return possible;
}

Direction
Mobile::getRandomDirection() const
{
  return (Direction) (rand() % 6);
}

void
Mobile::agir()
{

}
