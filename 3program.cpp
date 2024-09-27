#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    char ch;
    double d;

    ifstream file("d:\\bilal.txt");

    if (!file)
    {
        cout << "File opening error." << endl;
        exit(1); 
    }
    file >> n >> ch >> d;
    cout << "The contents of the file are as follows:" << endl;
    cout << n << endl; 
    cout << ch << endl; 
    cout << d << endl; 

    file.close(); 

    return 0;
}
