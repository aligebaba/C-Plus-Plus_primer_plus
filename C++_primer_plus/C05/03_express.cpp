// express.cpp -- value of expressions

#include <iostream>

int main()
{
    using namespace std;
    int x;

    cout << "The expression x = 100 has the value " << (x = 100) << endl;
    cout << "Now x = " << x << endl;
    cout << "The expression x < 3 has the value " << (x < 3) << endl;
    cout << "The expression x > 3 has the value " << (x > 3) << endl;
    cout.setf(ios_base::boolalpha);     // 命令cout将bool值显示为true和false。
    cout << "The expression x < 3 has the value " << (x < 3) << endl;
    cout << "The expression x > 3 has the value " << (x > 3) << endl;

    cin.get();
    return 0;
}