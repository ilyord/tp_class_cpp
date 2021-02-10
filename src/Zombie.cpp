#include "Zombie.h"
#include <iostream>

using namespace std;

Zombie::Zombie(){
    nom = "zombie";
    pv = 100;
	attack = 10;
	defence = 0;

	cout<<"Je suis un Zombie"<<endl;
}

Zombie::~Zombie()
{

}


int Zombie::getPv() const
{
	return pv;
}

void Zombie::setPv(int s) {
	if (s > 100 || s < 0) {
		cerr <<getNom()<<" est decede" << endl;
		pv = 0;
		this->~Zombie();

	}
	else {
		pv = s;
	}
}

void Zombie::setAttack(int a) {
	if (a > 10 || a < 0) {
		cerr <<getNom()<< "zombie est decede" << endl;
		a = 0;
		this->~Zombie();
	}
	else {
		a = a;
	}
}

string Zombie::getNom() const
{
	return nom;
}

void Zombie::setNom(string n)
{
	nom = n;
}

int Zombie::getAttack() const
{
	return attack;
}

int Zombie::getDefence() const
{
	return defence;
}

void Zombie::setDefence(int d)
{
	defence = d;
}


void Zombie::showInfos() const
{
	cout << "nom : " << getNom() << endl;
	cout << "pv : " << getPv() << endl;
	cout << "attack : " << getAttack() << endl;
	cout << "defence : " << getDefence() << endl;
	cout<<endl;
}
