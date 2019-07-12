// arrfun2.cpp -- functions with an array argument

#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);      // 函数头中 int arr[] 等价于 int * arr （仅在函数头中才成立！！）

int main()
{
    using namespace std;
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    cout << cookies << " = array address, ";
    cout << sizeof cookies << " = size of cookies\n";   // 整个数组的长度。

    int sum = sum_arr(cookies, ArSize);     //  数组名被视为指针，也即数组第一个元素的地址。
    cout << "Total cookies eaten: " << sum << endl;

    sum = sum_arr(cookies, 3);
    cout << "First three eaters ate " << sum << " cookies.\n";

    sum = sum_arr(cookies + 4, 4);
    cout << "Last four eaters ate " << sum << " cookies.\n";

    cin.get();
    return 0;
}

int sum_arr(int arr[], int n)       // 函数调用将cookies的地址赋给指针变量arr。函数将使用原来的数组。
{
    int total = 0;
    std::cout << arr << " = arr, ";
    std::cout << sizeof arr << " = size of arr\n";  // 指针变量的长度。
    for (int i = 0; i < n; i++)
        total = total + arr[i];
    return total;
}