// swaps.cpp -- swapping with referencrs and with pointers

#include <iostream>

void swapr(int &a, int &b);
void swapp(int *p, int *q);
void swapv(int a, int b);

int main()
{
    using namespace std;
    int wallet1 = 300;
    int wallet2 = 350;
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using references to swap contents:\n";
    swapr(wallet1, wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using pointers to swap contents again:\n";
    swapp(&wallet1, &wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Trying to use passing by value:\n";
    swapv(wallet1, wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cin.get();
    return 0;
}

void swapr(int &a, int &b)  // 按引用传递，被调用的函数能够访问调用函数中的变量。
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

void swapp(int *p, int *q)  // 传递指针。
{
    int temp;

    temp = *p;
    *q = *p;
    *q = temp;
}

void swapv(int a, int b)    // 按值传递，被调用的函数不能访问调用函数中的变量。
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}