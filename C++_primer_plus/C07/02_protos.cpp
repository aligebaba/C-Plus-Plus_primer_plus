// protos.cpp -- using prototypes and function calls

#include <iostream>
void cheers(int);
double cube(double x);

int main()
{
    using namespace std;
    cheers(5);
    cout << "Give me a number: ";
    double side;
    cin >> side;
    double volume = cube(side);
    cout << "A " << side << "-foot cube has a volume of ";
    cout << volume << " cubic feet.\n";
    cheers(cube(2));    // 编译器自动将cube()的参数2转换成2.0；自动将cheers()的参数8.0转换成8.

    cin.get();
    cin.get();
    return 0;
}

void cheers(int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
        cout << "Cheers! ";
    cout << endl;
}

double cube(double x)
{
    return x * x * x;
}