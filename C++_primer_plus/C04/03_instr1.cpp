// instr1.cpp -- reading more than one string

#include <iostream>

int main()
{
    using namespace std;
    const int Arsize = 20;
    char name[Arsize];
    char dessert[Arsize];

    cout << "Enter your name: \n";
    cin >> name;    // 只能读取一个单词
    cout << "Enter your favorite dessert: \n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    cin.get();
    cin.get();
    return 0;    
}