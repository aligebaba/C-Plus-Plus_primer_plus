// instr3.cpp -- reading more than one word with get() & get()

#include <iostream>

int main()
{
    using namespace std;
    const int Arsize = 20;
    char name[Arsize];
    char dessert[Arsize];

    cout << "Enter your name: \n";
    cin.get(name, Arsize).get();
    cout << "Enter your favorite dessert: \n";
    cin.get(dessert, Arsize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    // cin.get();
    cin.get();
    return 0;
}