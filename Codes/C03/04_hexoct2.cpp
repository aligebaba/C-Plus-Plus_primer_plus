// hexoct1.cpp -- shows hex and octal literals

#include <iostream>

int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;    // 手动修改数值的进制，十六进制
    cout << "waist = " << waist << " (hex for 42)" << endl;
    cout << oct;    // 手动修改数值的进制，八进制
    cout << "inseam = " << inseam << " (octal for 42)" << endl;

    cin.get();
    return 0;
}