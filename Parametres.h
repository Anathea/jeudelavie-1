/*
 * Parametres.h
 *
 *  Created on: 19 mars 2013
 *      Author: thomas
 */

#ifndef PARAMETRES_H_
#define PARAMETRES_H_

#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

/*
 *      Module qui permet de recuperer les parametres et de les enregistrer dans une map
 *      pour chercher un parametre il suffit de donner son nom, sa valeur est retourner
 *
 */
class Parametres
{
private :
  map<string, int> param;
  vector<string> explode( const string &delimiter, const string &str);

public:
  Parametres();
  virtual
  ~Parametres();

  const int getValeurParametre( const string );
  const void setValeurParam(const string, const int );
};

#endif /* PARAMETRES_H_ */
