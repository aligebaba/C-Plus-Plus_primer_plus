// external.cpp -- external variables

#include <iostream>

using namespace std;
double warming = 0.3;
void update(double dt);
void local();

int main()
{
    cout << "Gloable warming is " << warming << " degrees.\n";
    update(0.1);
    cout << "Gloable warming is " << warming << " degrees.\n";
    local();
    cout << "Gloable warming is " << warming << " degrees.\n";

    cin.get();
    return 0;
}