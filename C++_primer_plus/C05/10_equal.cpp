// equal.cpp -- equalit vs assignment

#include <iostream>

int main()
{
    using namespace std;
    int quizscores[10] = {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};

    cout << "Doing it right:\n";
    int i;
    for (i = 0; quizscores[i] == 20; i++)   // 注意避免将关系运算符“==”写成赋值运算符“=”。
        cout << "quiz " << i << " is a 20\n";

    // 以下部分为错误代码，会导致死机，慎用！！！
    // cout << "Doing it dangerously wrong:\n";
    // for (i = 0; quizscores[i] = 20; i++)
    //     cout << "quiz " << i << " is a 20\n";

    cin.get();
    return 0;
}