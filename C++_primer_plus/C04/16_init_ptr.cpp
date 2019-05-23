// init_ptr.cpp -- initialize a pointer

#include <iostream>

int main()
{
    using namespace std;
    int higgens = 5;
    int * pt = &higgens;

    cout << "value of higgens = " << higgens;
    cout << "; address of higgens = " << &higgens << endl;

    cout << "value of *pt = " << *pt;
    cout << "; address of pt = " << pt << endl;

    cin.get();
    return 0;
}