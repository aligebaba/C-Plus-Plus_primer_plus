// mixtypes.cpp -- some type combinations

#include <iostream>

struct antarctica_years_end
{
    int year;
};

int main()
{
    using namespace std;
    antarctica_years_end s01, s02, s03;     // 创建结构的变量。
    s01.year = 1998;
    antarctica_years_end *pa = &s02;        // 创建指向结构antarctica_years_end的指针。
    pa->year = 1999;
    antarctica_years_end trio[3];           // 创建结构的数组。
    trio[0].year = 2003;
    cout << trio->year << endl;             // trio是一个结构的数组指针。
    const antarctica_years_end *arp[3] = {&s01, &s02, &s03};    // 创建指针数组，arp[1]、arp[2]、arp[3]分别指向三个结构体变量。
    cout << arp[1]->year << endl;
    const antarctica_years_end **ppa = arp; // 创建上述指针数组的指针，*ppa是结构指针，ppa是指向const antarctica_years_end的指针。
    auto ppb = arp;                         // ppb是指向const antarctica_years_end的指针，即指向结构指针的指针，*ppb是结构指针。
    cout << (*ppa)->year << endl;
    cout << (*(ppb + 1))->year << endl;

    cin.get();
    return 0;
}