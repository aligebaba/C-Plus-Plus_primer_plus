// static.cpp -- using a static local variable

#include <iostream>

const int ArSize = 10;
void strcount(const char *str);

int main()
{
    using namespace std;
    char input[ArSize];
    char next;

    cout << "Enter a line:\n";
    cin.get(input, ArSize);
    while (cin)     // 读取空行时为false
    {
        cin.get(next);      // 读取剩余字符
        while (next != '\n')
            cin.get(next);
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        cin.get(input, ArSize);
    }
    cout << "Bye\n";

    cin.get();
    cin.get();
    return 0;
}

void strcount(const char *str)
{
    using namespace std;
    static int total = 0;   // 只在启动时进行一次初始化
    int count = 0;

    cout << "\"" << str << "\" contains ";
    while (*str++)
        count++;    // 计算字符个数
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}