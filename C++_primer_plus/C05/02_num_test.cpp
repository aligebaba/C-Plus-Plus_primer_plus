// num_test.cpp -- use numeric test in for loop

#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter the starting countdown value: ";
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i; i--)     // i不为0时，测试表达式始终为真。
        cout << "i = " << i << "\n";
    cout << "Done now that i = " << i << "\n";

    cin.get();
    cin.get();
    return 0;
}