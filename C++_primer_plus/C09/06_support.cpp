// support.cpp -- use external variable

#include <iostream>

extern double warming;

void update(double dt);
void local();

using std::cout;

void update(double dt)
{
    extern double warming;  // warming是全局变量（外部变量），该声明是可选的。
    warming += dt;
    cout << "Updating global warming to " << warming << " degrees.\n";
}

void local()
{
    double warming = 0.8;   // 此处定义的warming是局部变量。
    cout << "Local warming = " << warming << " degrees.\n";
    cout << "But global warming = " << ::warming << " degrees.\n";  // ::是作用域解析运算符，表示使用该变量的全局变量版本。
}