// choices.cpp -- choosing a template

#include <iostream>

template<class T>
T lesser(T a,T b)   // 返回较小的值。
{
    return a < b ? a : b;
}

int lesser(int a, int b)    // 返回绝对值较小的值。
{
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    return a < b ? a : b;
}

int main()
{
    using namespace std;
    int m = 20;
    int n = -30;
    double x = 15.5;
    double y = 25.9;

    cout << lesser(m, n) << endl;       // 匹配非模板函数
    cout << lesser(x, y) << endl;       // 匹配模板函数，double类型
    cout << lesser<>(m, n) << endl;     // 匹配模板函数，int类型
    cout << lesser<int>(x, y) << endl;  // 匹配模板函数，将double类型强制转换为int类型

    cin.get();
    return 0;
}