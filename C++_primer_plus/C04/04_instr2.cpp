// instr2.cpp -- reading more than one word with getline()

#include <iostream>

int main()
{
    using namespace std;
    const int Arsize = 20;
    char name[Arsize];
    char dessert[Arsize];

    cout << "Enter your name: \n";
    cin.getline(name, Arsize);  // 可以读取一行，直到遇到换行符，并且最终丢弃换行符。
    cout << "Enter your favorite dessert: \n";
    cin.getline(dessert, Arsize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    cin.get();
    cin.get();
    return 0;    
}