#include "Chasseur.h"

Chasseur::Chasseur() : Vehicule(100, 200, 400, 1, 24, 600, 600, 0, 2, 50, 0.05, "Chasseur")
{
  cout<<"Type Chasseur"<<endl;
}

Chasseur::Chasseur(int hp) : Vehicule(hp, 200, 400, 1, 72, 18000, 1800, 300, 2, 50, 0.15, "Chasseur")
{
  cout<<"Type Chasseur"<<endl;
}

void Chasseur::test()
{
  cout<<"Chasseur"<<endl;
}

/****** MARCHE PAS ******
void Chasseur::attackPlayer(Vehicule* cible)
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
