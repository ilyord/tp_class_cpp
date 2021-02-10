#include "Bomber.h"



Bomber::Bomber() : Zombie(){
    cout<<"Je suis un Bomber par default"<<endl;
}

Bomber::Bomber(int a) : Zombie("Bomber",100,20)
{
cout<<"Je suis un Bomber"<<endl;
}

Bomber::~Bomber()
{

}
