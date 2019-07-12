// pointer.cpp -- our first pointer variable

#include <iostream>

int main()
{
    using namespace std;
    int updates = 6;
    int * p_updates;         // *位于地址指针前，表示取该地址中的值；*前后的空格都是可选的。
    p_updates = &updates;   // &位于变量前，表示取该变量的地址；地址指针p_updates与&updates指向同一个地址。

    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;

    cin.get();
    return 0;
}