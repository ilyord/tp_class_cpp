#include "Tank.h"



Tank::Tank(){
    cout<<"Je suis un Tank par default"<<endl;
}

Tank::Tank(int a) : Zombie::Zombie("Tank",100,20,50)
{
cout<<"Je suis un Tank"<<endl;
}

Tank::~Tank()
{

}
