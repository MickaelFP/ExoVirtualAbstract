#include "Croiseur.h"

Croiseur::Croiseur() : Vehicule(100, 200, 400, 1, 24, 600, 600, 0, 2, 50, 0.05, "Croiseur")
{
  cout<<"Type Croiseur"<<endl;
}

Croiseur::Croiseur(int hp) : Vehicule(hp,10000, 20000, 1, 4320, 54000, 5400, 50, 20, 250, 0.3, "Croiseur")
{
  cout<<"Type Croiseur"<<endl;
}

void Croiseur::test()
{
  cout<<"Croiseur"<<endl;
}
/****** MARCHE PAS ******
void Croiseur::attackPlayer(Vehicule* cible)
{
  float random = rand()%100;
  if(random <= (getSurchargeLaser()*100))
  {
    cout<<"CRIT"<<endl;
    cible->setCoque(cible->getCoque() - ((getPuissanceLaser()*getLaser())*3)
    +getArme()->getDegats());
  }
  else
  {
    cible->setCoque(cible->getCoque() - (getPuissanceLaser()*getLaser())
    +getArme()->getDegats());
  }
}
*/
