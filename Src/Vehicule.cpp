#include "Vehicule.h"


Vehicule::Vehicule()
{
  coque = 100;
	coqueBlindage = 200;
  shield = 400;
  nanorobot = 1;
  oxygene = 24;
  signal = 600;
  portee = 600;
  propulseur = 0;
	laser = 0;
	puissanceLaser = 25;
	surchargeLaser = 0.05f;
	arme = new Arme();
  type = "Default";
	cout<<"Vehicule de type Vaisseau :"<<endl;
  cout << endl;
}

Vehicule::Vehicule(int c,int cb,int s, int n, int o, int si, int pa, int p, int l, int pl, float sl, string t)
{
  coque = c;
  coqueBlindage = cb;
  shield = s;
  nanorobot = n;
  oxygene = o;
  signal = si;
  portee = pa;
  propulseur = p;
  laser = l;
	puissanceLaser = pl;
  surchargeLaser = sl;
  type = t;
}

Vehicule::~Vehicule()
{
  //cout<<"Mon Vehicule a ete detruit"<<endl;
}


int Vehicule::getCoque() const
{
	return coque;
}

void Vehicule::setCoque(int c) 
{
	if (c < 0) 
  {
		coque = 0;
    cout<<"Votre Vehicule a ete detruit"<<endl;
	}
	else 
  {
		coque = c;
	}
}

int Vehicule::getCoqueBlindage() const
{
	return coqueBlindage;
}

void Vehicule::setCoqueBlindage(int cb)
{
  if (cb < 0)
  {
		coqueBlindage = 0;
	}
  else
  {
	  coqueBlindage = cb;
  }
}

int Vehicule::getShield() const
{
	return shield;
}

void Vehicule::setShield(int s)
{
  if (s < 0)
  {
		shield = 0;
	}
  else
  {
	  shield = s;
  }
}

int Vehicule::getNanorobot() const
{
	return nanorobot;
}

void Vehicule::setNanorobot(int n)
{
  if (n < 0)
  {
		nanorobot = 0;
	}
  else
  {
	  nanorobot = n;
  }
}

int Vehicule::getOxygene() const
{
	return oxygene;
}

void Vehicule::setOxygene(int o)
{
  if (o < 0)
  {
		oxygene = 0;
    cout<<"Vous êtes mort d'asphyxie"<<endl;
	}
  else
  {
	  oxygene = o;
  }
}

int Vehicule::getSignal() const
{
	return signal;
}

void Vehicule::setSignal(int si)
{
  if (si < 0)
  {
		signal = 0;
	}
  else
  {
	  signal = si;
  }
}

int Vehicule::getPortee() const
{
	return portee;
}

void Vehicule::setPortee(int pa)
{
  if (pa < 600)
  {
		portee = 600;
	}
  else
  {
	  portee = pa;
  }
}

int Vehicule::getPropulseur() const
{
	return propulseur;
}

void Vehicule::setPropulseur(int p)
{
	propulseur = p;
}

int Vehicule::getLaser() const
{
	return laser;
}

void Vehicule::setLaser(int l)
{
  if (l < 0)
  {
		laser = 0;
	}
  else
  {
	  laser = l;
  }
}

int Vehicule::getPuissanceLaser() const
{
	return puissanceLaser;
}

void Vehicule::setPuissanceLaser(int pl) 
{
  if (pl < 0)
  {
		puissanceLaser = 0;
	}
	else
  {
		puissanceLaser = pl;
	}
}

float Vehicule::getSurchargeLaser() const
{
	return surchargeLaser;
}

void Vehicule::setSurchargeLaser(float sl)
{
	surchargeLaser = sl;
}

string Vehicule::getType() const
{
	return type;
}

void Vehicule::setType(string t)
{
	type = t;
}

Arme* Vehicule::getArme() const
{
  return arme;
}

void Vehicule::setArme(Arme* a)
{
  arme = a;
}

void Vehicule::showInfos() const
{
  cout << "_______________________" << endl << endl;
  cout << "     - Caractéristiques :" << endl << endl;
	cout << "          Coque : " << getCoque() << endl;
  cout << "          Blindage de la coque : " << getCoqueBlindage() << endl;
  cout << "          Bouclier énergétique : " << getShield() << endl;
  cout << "          Auto réparation : " << getNanorobot() << "/s" << endl;
  cout << "          Capacité d'oxygene : " << getOxygene() << "h" << endl;
  cout << "          Portée radar/comunication : " << getSignal() << " unite" << endl;
  cout << "          Portée d'action : " << getPortee() << " unite" << endl;
  cout << "          Vitesse des propulseurs : " << getPropulseur() << " U/s" << endl;
	cout << "          Nombre de laser : " << getLaser() << endl;
  cout << "          Puissance des lasers : " << getPuissanceLaser() << endl;
	cout << "          Surcharge des laser : " << getSurchargeLaser() * 100 << " %" << endl;
  cout << "          type : " << getType() << endl;
  
  if(getArme() != nullptr)
  {
    cout <<" Arme : "<<endl;
    cout <<"    degats : "<<arme->getDegats()<<endl;
    cout <<"    type : "<<arme->getType()<<endl;
    cout <<"    portee : "<<arme->getPortee()<<endl;
  }
  
}

void Vehicule::attackPlayer(Vehicule* cible)
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

void Vehicule::reparationPlayer(Vehicule* cible)
{
  cout<<"CRIT"<<endl;
  cible->setCoque(cible->getCoque() + getNanorobot());
}

void Vehicule::test()
{
  cout<<"Vehicule"<<endl;
}

bool Vehicule::operator==(Vehicule & v)
{
  return v.getCoque() == getCoque() && v.getPuissanceLaser() == getPuissanceLaser()&& v.getCoqueBlindage() == getCoqueBlindage()&& v.getNanorobot() == getNanorobot();
}

Vehicule Vehicule::operator+(Vehicule const & v)
{
  Vehicule temp;
  temp.setCoque(getCoque() + v.getCoque());
  temp.setPuissanceLaser(getPuissanceLaser() + v.getPuissanceLaser());
  temp.setCoqueBlindage(getCoqueBlindage() + v.getCoqueBlindage());
  temp.setNanorobot(getNanorobot() - v.getNanorobot());
  temp.setSurchargeLaser(max(getSurchargeLaser(), v.getSurchargeLaser()));
  return temp;
}


void Vehicule::operator+=(Vehicule const & v)
{
  setCoque(getCoque() + v.getCoque());
  setPuissanceLaser(getPuissanceLaser() + v.getPuissanceLaser());
  setCoqueBlindage(getCoqueBlindage() + v.getCoqueBlindage());
  setNanorobot(getNanorobot() - v.getNanorobot());
  setSurchargeLaser(max(getSurchargeLaser(), v.getSurchargeLaser()));
}

bool Vehicule::operator!=(Vehicule & v)
{
  return !(v == *this);
}
