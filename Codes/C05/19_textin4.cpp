// textin4.cpp -- reading chars with cin.get()

#include <iostream>

int main(void)
{
    using namespace std;
    int ch;            // char型变量用于存储单个字符。
    int count = 0;

    while ((ch = cin.get()) != EOF)   // 打印输入的字符，直到按下"ctrl+z"和回车键。
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl
         << count << " characters read\n";

    cin.get();
    cin.get();
    return 0;
}