// plus_one.cpp -- the increment operator

#include <iostream>

int main()
{
    using namespace std;
    int a = 20;
    int b = 20;
    cout << "a   = " << a << ":   b = " << b << endl;
    cout << "a++ = " << a++ << ": ++b = " << ++b << endl;
    cout << "a   = " << a << ":   b = " << b << endl;

    cin.get();
    return 0;
}