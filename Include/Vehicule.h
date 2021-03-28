#ifndef VEHICULE_H
#define VEHICULE_H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>
#include "Arme.h"

using namespace std;

class Vehicule
{
private:
  
	int coque = 100;
  int coqueBlindage = 200;
  int shield = 400;
  int nanorobot = 1;
  int oxygene = 24;
  int signal = 600;
  int portee = 600;
  int propulseur = 0;
  int laser = 0;
  int puissanceLaser = 25;
	float surchargeLaser = 0.05f;
	Arme* arme = nullptr;
  string type = "Chasseur";

public:

  //CONSTRUCTEURS
  Vehicule();
  Vehicule(int c, int cb, int s, int n, int o, int si, int pa, int p, int l, int pl, float sl, string t);


  //DESTRUCTEUR
  ~Vehicule();

  // GETTER & SETTER
  int getCoque() const;
	void setCoque(int c);

	int getCoqueBlindage() const;
	void setCoqueBlindage(int cb);

	int getShield() const;
	void setShield(int s);

	int getNanorobot() const;
	void setNanorobot(int n);

  int getOxygene() const;
	void setOxygene(int o);

	int getSignal() const;
	void setSignal(int si);

  int getPortee() const;
	void setPortee(int pa);

  int getPropulseur() const;
	void setPropulseur(int p);

	int getLaser() const;
	void setLaser(int l);

	int getPuissanceLaser() const;
	void setPuissanceLaser(int pl); 

	float getSurchargeLaser() const;
	void setSurchargeLaser(float sl);

  string getType() const;
	void setType(string t);

	Arme* getArme() const;
	void setArme(Arme* a);

  //AFFICHE LES INFOS DU PERSO
	void showInfos() const;

  virtual void test(); //pour les enfants -> pass en référence (&)

  // une classe avec au moins un virtual = 0 est définie comme abstraite et ne peux plus être créée
  
  // virtual void attackPlayer(Vehicule* cible) = 0;  *** MARCHE PAS ****
  void attackPlayer(Vehicule* cible);
  void reparationPlayer(Vehicule* cible);

  bool operator==(Vehicule & v);

  //virtual Vehicule operator+(Vehicule const & v) = 0;  *** MARCHE PAS ****
  Vehicule operator+(Vehicule const & v);
  void operator+=(Vehicule const & v);

  bool operator!=(Vehicule & v);

};

#endif // Vehicule_H