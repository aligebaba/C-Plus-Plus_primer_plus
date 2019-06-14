// secref.cpp -- defining and using a reference

#include <iostream>

int main()
{
    using namespace std;
    int rats = 101;
    int &rodents = rats;    // 可以通过初始化声明来设置引用，但不能通过赋值来设置。

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    int bunnies = 50;
    rodents = bunnies;      // 将bunnies变量的值赋给了rodents（rats）
    cout << "bunnies = " << bunnies;
    cout << ", rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    
    cout << "bunnies address = " << &bunnies;
    cout << ", rodents address = " << &rodents << endl;

    cin.get();
    return 0;
}