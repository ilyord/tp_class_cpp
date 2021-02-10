#ifndef TANK_H
#define TANK_H

#include <Zombie.h>


class Tank : public Zombie
{
    public:
        Tank();
        Tank(int d);
        virtual ~Tank();

    protected:

    private:
};

#endif // TANK_H
