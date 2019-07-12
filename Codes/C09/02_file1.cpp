// file.cpp -- example of a three-file program

#include <iostream>
#include "01_coordin.h"     // 应与头文件的文件名相同！！

using namespace std;

int main()
{
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers (q to quit): ";   // 实际情况是：输入非数字时，退出while循环。
    }
    cout << "Bye!\n";

    cin.get();
    cin.get();
    return 0;
}