// textin2.cpp -- using cin.get(char)

#include <iostream>

int main()
{
    using namespace std;
    char ch;            // char型变量用于存储单个字符。
    int count = 0;

    cout << "Enter characters; enter # to quit:\n";
    cin.get(ch);        // 读取输入的首字符；可读取空格。
    while (ch != '#')   // 打印输入的字符，直到遇到符号"#"为止。
    {
        cout << ch;
        ++count;
        cin.get(ch);    // 读取输入的剩余字符。
    }
    cout << endl
         << count << " characters read\n";

    cin.get();
    cin.get();
    return 0;
}