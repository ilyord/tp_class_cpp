#ifndef RAPACE_H
#define RAPACE_H

#include <Zombie.h>


class Rapace : public Zombie
{
    public:
        Rapace();
        Rapace(string n, int pv, int a, int d);
        virtual ~Rapace();

    protected:

    private:
};

#endif // RAPACE_H
