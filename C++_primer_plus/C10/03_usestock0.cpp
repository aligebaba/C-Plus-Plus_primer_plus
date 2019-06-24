// usestock0.cpp -- the client program
// 与02_stock00.cpp一起编译

#include <iostream>
#include "01_stock00.h"

int main()
{
    Stock fluffy_the_cat;
    fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(400, 20.00);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(30000, 40.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(30000, 0.125);
    fluffy_the_cat.show();

    std::cin.get();
    return 0;
}