//#include "Zombie.h"
#include "Bomber.h"
#include "Tank.h"
#include "Rapace.h"
#include "Mage.h"

int main()
{

Zombie z1("andre");
Zombie z2("Jacques");
Zombie z3("Marc");
Zombie z4("Phillipes");
Zombie z5("Fabien");
Zombie z6("Pierre");
Zombie z7("Michel");
Zombie z8("Tituan");
Zombie z9("John");
Zombie z10("Tintin");

z1.showInfos();
z2.showInfos();
z3.showInfos();
z4.showInfos();
z5.showInfos();
z6.showInfos();
z7.showInfos();
z8.showInfos();
z9.showInfos();
z10.showInfos();


Bomber b(20);
b.showInfos();

Tank t(50);
t.showInfos();

Rapace r;
r.showInfos();

Mage m;
m.showInfos();








return 0;
}
