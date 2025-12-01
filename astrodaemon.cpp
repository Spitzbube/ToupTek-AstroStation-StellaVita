
#include <stdio.h>
#include "astrodaemon.h"


AstroDaemon::AstroDaemon()
{

}


AstroDaemon::~AstroDaemon()
{

}


int AstroDaemon::init()
{

    return 0;
}



int AstroDaemon::run()
{

    return 0;
}


int AstroDaemon::stop()
{

    return 0;
}


int AstroDaemon::cleanup()
{

    return 0;
}



int main()
{
    AstroDaemon ad;

    int res = ad.init();
    if (res != 1)
    {
        puts("[AstroDaemon] Application initialize failed");
        return 1;
    }

    res = ad.run();

    return res;
}

