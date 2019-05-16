// morechar.cpp -- the char type and int type contrasted

#include <iostream>

int main()
{
    using namespace std;
    char ch = 'M'; // 'M'表示字符M的数值编码77，此处等价于：char ch = 77;
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);
    cout.put('!');

    // cout << endl;
    // cout.put(78);   // 打印数值对应的ASCII字符
    // cout << 78;     // 可直接输出数值

    cout << endl
         << "Done" << endl;

    cin.get();
    return 0;
}