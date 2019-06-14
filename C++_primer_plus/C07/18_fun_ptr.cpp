// fun_prt.cpp -- pointers to functions

#include <iostream>

double betsy(int);
double pam(int);

void estimate(int lines, double (*pf)(int));    // 声明函数指针与声明函数原型类似。指针名称自己定义。

int main()
{
    using namespace std;
    int code;
    cout << "How many lines of code do you need? ";
    cin >> code;
    cout << "Here's Betsy's estimate:\n";
    estimate(code, betsy);      // 函数名betsy即表示该函数的地址。
    cout << "Here's Pam's estimate:\n";
    estimate(code, pam);

    cin.get();
    cin.get();
    return 0;
}

double betsy(int lns)
{
    return 0.05 * lns;
}

double pam(int lns)
{
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
    using namespace std;
    cout << lines << " lines will take ";
    cout << (*pf)(lines) << " hour(s)\n";
}