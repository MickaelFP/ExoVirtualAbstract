#include "Chasseur.h"
#include "Croiseur.h"
#include "Navette.h"
#include <vector>
#include <limits>

void vider_buffer()
{
    cin.clear();
    cin.seekg(0, ios::end);

    if(!cin.fail())
    {
        cin.ignore(numeric_limits<streamsize>::max()); // Le flux a déjà un état valide donc inutile de faire appel à clear()
    }

    else
    {
        cin.clear(); // Le flux est dasn un état invalide donc on le remet en état valide
    }
}

int main() {
  srand(time(NULL));

  cout << "________________________________________________________________________________________________________________________" << endl;
  cout << endl << endl;
  cout << " /********** /**      ** /********     /********  /*******    /*******    /********* /******** " << endl;
  cout << " /////**///  /**     /** /**/////      /**//////  /**///**    /**///**    /**//////  /**/////  " << endl;
  cout << "     /**     /**     /** /**           /**        /**  /**   /**    /**   /**        /**       " << endl;
  cout << "     /**     /********** /*******      /********* /*******   /******/**   /**        /*******  " << endl;
  cout << "     /**     /**//////** /**////       ////////** /**////   /**///////**  /**        /**////   " << endl;
  cout << "     /**     /**     /** /**                  /** /**       /**      /**  /**        /**       " << endl;
  cout << "     /**     /**     /** /********      ********  /**      /**        /** /********* /******** " << endl;
  cout << "     //      //      //  ////////      ////////   //       //         //  /////////  ////////  " << endl;
  cout << endl << endl;
  cout << "________________________________________________________________________________________________________________________" << endl;
  cout << endl << endl;
  
  bool begin = false;
  bool start = false;
  bool engager = false;
  bool feu = false;
  bool victoire = false;
  while( begin == false )
  {  
    char enter1[100];
    cout << "[ Commencer l'aventure ? ] [oui]" <<endl;
    cout << endl << endl << endl;
    cin >> enter1;
    vider_buffer();
    cout <<	"Synopsis :" << endl << endl;
    cout <<	"Octobre 2196." << endl << endl;
    cout <<	"vous vous appellez John Edelweiss, chasseur de prime amateur de 35 ans." << endl;
    cout << "Vous avez dépenssez tout votre argent pour acheter votre tout premier vaisseaux." << endl;
    cout << "Vous avez accépter votre toute première mission avec l'objectif de vous renflouer." << endl;
    cout <<	"Vous espérer que se travail pourra contribuer à votre rennomer à travers la Galaxie" << endl;
    cout << "Une fois toute tension du au stress évacuée, vous est enfin prêt à partir." << endl;
    cout << endl;
    begin = true;
  }
  

  cout << endl << endl;
  Vehicule v;
  cout << "_______________________" << endl << endl;
  Chasseur cha(100);
  cha.showInfos();
  cout << endl;
  cout << "_______________________" << endl << endl;
  Croiseur cro(5000);
  cro.showInfos();
  cout << endl;
  cout << "_______________________" << endl << endl;
  Navette nav(600);
  nav.showInfos();
  cout << endl << endl << endl << endl << endl;

  while(start == false)
  {
    char enter2[100];
    cout << "[ Décoler ? ] [oui]" <<endl;
    cout << endl << endl << endl;
    cin >> enter2;
    vider_buffer();
    start = true;
  }

  while(start == true && engager == false)
  {
    char enter3[3];
    cout << endl << endl << endl << endl << endl;
    cout << "         !!!!!!!!!!         ATTENTION DANGER : ENNEMI EN APPROCHE         !!!!!!!!!!         " << endl << endl;
    cout << "         !!!!!!!!!!           EXTRATERRESTRE - TYPE CHASSEUR              !!!!!!!!!!         " << endl << endl << endl << endl;
    cout << "[ Engagez le combat ? ] [oui] " <<endl;
    cout << endl << endl << endl;
    cin >> enter3;
    vider_buffer();
    engager = true;
  }
  cout << endl << endl << endl;
  cout << "| DEBUT DU COMBAT |" << endl << endl << endl;
  cout << "_______________________" << endl << endl;
  Chasseur extraterrestre(1000);
  Arme a1;
  cha.setArme(&a1);
  vector<Vehicule*> equipe;
  equipe.push_back(&cha);
  equipe.push_back(&cro);
  equipe.push_back(&nav);

  while(engager == true)
  {
    extraterrestre.showInfos();
    cout << endl << endl << endl;
    feu = true;
    while(feu == true)
    {
      for(Vehicule* perso : equipe)
      {
        if(extraterrestre.getCoque() > 0)
        {
          cout << endl << endl << endl;
          cout << "[ Ouvrir le feu ? ]" << endl;
          cout << endl << endl << endl;
          vider_buffer();
          char enter4[100];
          cin >> enter4;
          vider_buffer();
          cout << endl << endl << endl;
          cout << "!!!!!!!!!! PIOU PIOU PIOU !!!!!!!!!!" << endl;
          perso->attackPlayer(&extraterrestre);
          cout << "_______________________" << endl << endl;
          cout << "Chasseur extraterrestre" << endl;
          extraterrestre.showInfos();
          break;
        }
        else
        {
          victoire = true;
          engager = false;
          break;
        }
      }
      
    } 
    break;
  }

  /****** fallait au moins encore un petit truc qui fonctionne pas grrr ******

  while(extraterrestre.getCoque() <= 0)
  {
    cout << endl << endl << endl;
    cout << "!!!!!!!!!!              KKKCHHHHH            !!!!!!!!!!" << endl;
    cout << "!!!!!!!!!!    Vous avez vaincue l'ennemie    !!!!!!!!!!" << endl;
  }

  while(victoire == true)
  {
    cout << endl << endl << endl;
    cout << "Votre mission est accomplie." << endl;
    cout << endl << endl << endl;
    cout << "[ Rentrez à la base ? ]" << endl;
    cout << endl << endl << endl;
    vider_buffer();
    char enter0[100];
    cin >> enter0;
    vider_buffer();
    break;
  }
  */

  vider_buffer();
  return 0;
}