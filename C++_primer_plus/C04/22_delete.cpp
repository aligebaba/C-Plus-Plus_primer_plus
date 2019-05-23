// delete.cpp -- using the delete operator

#include <iostream>
#include <cstring>

using namespace std;
char *getname(void);    // 需先声明自定义函数的函数原型，否则会编译错误！

int main()
{
    char *name;         // 创建未经初始化的指针。

    name = getname();
    cout << name << " at " << (int *)name << "\n";
    delete [] name;

    name = getname();
    cout << name << " at " << (int *)name << "\n";
    delete [] name;

    cin.get();
    return 0;
}

char * getname()
{
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp;
    char *pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);

    return pn;
}