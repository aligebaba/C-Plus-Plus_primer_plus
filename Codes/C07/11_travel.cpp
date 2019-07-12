// travel.cpp -- using structures with functions

#include <iostream>
struct travel_time      // 定义结构体 travel_time。
{
    int hours;
    int mins;
};
const int Mins_per_hr = 60;

travel_time sum(travel_time t1, travel_time t2);    // 函数原型，返回类型为结构体 travel_time。
void show_time(travel_time t);

int main()
{
    using namespace std;
    travel_time day1 = {5, 45};
    travel_time day2 = {4, 55};

    travel_time trip = sum(day1, day2);     // 声明结构体变量。
    cout << "Two-day total: ";
    show_time(trip);

    travel_time day3 = {4, 32};
    cout << "Three-day total: ";
    show_time(sum(trip, day3));

    cin.get();
    return 0;
}

travel_time sum(travel_time t1, travel_time t2)
{
    travel_time total;
    total.mins = (t1.mins + t2.mins) % Mins_per_hr;
    total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Mins_per_hr;
    return total;
}

void show_time(travel_time t)       // 形参类型为结构体 travel_time。
{
    using namespace std;
    cout << t.hours << " hours, "
         << t.mins << " minutes\n";
}