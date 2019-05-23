// ptrstr.cpp -- using pointer to strings

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char animal[20] = "bear";
    const char *bird = "wren";      // 字符串字面值是常量，所以此处要使用const？
    char *ps;

    cout << animal << " and ";
    cout << bird << endl;

    cout << "Enter a kind of animal: ";
    cin >> animal;

    ps = animal;                    // 赋值操作只是复制地址。
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *)animal << endl;  // 给cout提供char*类型的指针时，将显示该指针指向的字符串。
    cout << ps << " at " << (int *)ps << endl;          // 因此，必须将指针强制转换为另一种类型，比如：int*。

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);             // strcpy(para1, para2)，第一个参数是目标地址，第二个参数是要复制的字符串的地址。
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    delete [] ps;

    cin.get();
    cin.get();
    return 0;
}