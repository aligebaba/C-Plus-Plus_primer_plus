// typecast.cpp -- forcing type changes

#include <iostream>

int main()
{
    using namespace std;
    int auks, bats, coots;

    auks = 19.99 + 11.99;   // 先得到double型结果31.98，然后将结果截短为int型

    bats = (int)19.99 + (int)11.99;
    coots = int(19.99) + int(11.99);
    cout << "auks = " << auks << ", bats = " << bats << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is ";
    cout << int(ch) << endl;
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;

    cin.get();
    return 0;
}