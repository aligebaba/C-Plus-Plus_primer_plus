// sumafile.cpp -- functions with an array argument

#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;

int main()
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;
    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;

    inFile >> value;
    while (inFile.good ())  // 读取过程正常时，返回true。
    {
        ++count;
        sum += value;
        inFile >> value;
    }
    if (inFile.eof())   // 最后一次读取数据时遇到EOF，则返回true。
        cout << "End of file reached.\n";
    else if (inFile.fail())     // 读取操作中发生类型不匹配时，返回true。
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";
    if (count == 0)
        cout << "No data processed.\n";
    else 
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    inFile.close();

    // cin.get();
    cin.get();
    return 0;
}