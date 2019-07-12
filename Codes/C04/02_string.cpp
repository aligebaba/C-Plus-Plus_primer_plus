// string.cpp -- storing strings in a array

#include <iostream>
#include <cstring>  // 用于strlen()函数

int main()
{
    using namespace std;
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";

    cout << "Howdy! I'm " << name2;
    cout << "! What's your name?\n";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n";
    cout << "in a array of " << sizeof(name1) << " bytes.\n";
    cout << "Your initial is " << name1[0] << ".\n";

    name2[3] = '\0';
    cout << "Here are the first 3 characters of my name: " << name2 << endl;

    cin.get();
    cin.get();
    return 0;
}