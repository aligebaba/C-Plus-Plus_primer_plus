// waiting.cpp -- using clock() in a time-delay loop

#include <iostream>
#include <ctime>

int main()
{
    using namespace std;
    cout<<"Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;      // 得到以系统时间单位为单位的时间。
    cout << "starting\a\n";
    clock_t start = clock();                    // 返回程序开始执行后所用的系统时间。
    while (clock() - start < delay)
        ;
    cout << "done \a\n";

    cin.get();
    cin.get();
    return 0;
}