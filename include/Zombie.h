#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

class Zombie
{
    public:
    //CONSTRUCTEURS
    Zombie();
    Zombie(string n,int p, int a){
    nom = n;
    pv = p;
    attack = a;
    }
    Zombie(string n,int p, int a, int d){
    nom = n;
    pv = p;
    attack = a;
    defence = d;
    }

    Zombie(string n){
    nom = n;
    }

    //DESTRUCT.
    ~Zombie();

    //GETTER/SETTER NOM
	string getNom() const;
	void setNom(string n);

    //GETTER/SETTER PV
	int getPv() const;
	void setPv(int p);

    //GETTER/SETTER ATTACK
	int getAttack() const;
	void setAttack(int a);

	    //GETTER/SETTER ATTACK
	int getDefence() const;
	void setDefence(int d);

    //AFFICHE LES INFOS DU PERSO
	void showInfos() const;



    protected:

    private:
        string nom = "zombie";
        int pv = 100;
        int attack = 10;
        int defence = 0;
};

#endif // ZOMBIE_H
