// compstr1.cpp -- comparing strings using arrays

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char word[5] = "?ate";
    for (char ch = 'a'; strcmp(word, "mate"); ch++)     // ch为字符变量，此处要用单引号''，不能使用双引号""。
    {
        cout << word << endl;
        word[0] = ch;   // 修改字符串中的字符。
    }
    cout << "After loop ends, word is " << word << endl;

    cin.get();
    return 0;
}