#ifndef CROISEUR_H
#define CROISEUR_H

#include "Vehicule.h"


class Croiseur : public Vehicule
{
  private:

  public:
    Croiseur();
    Croiseur(int hp);
    void test();
    //void attackPlayer(Vehicule* cible); ****** MARCHE PAS ******
    
};

#endif // Croiseur_H
