#include <iostream>
#include <fstream>
#include <stdlib.h> 
using namespace std;

int main()
{
    int n = 10;
    char ch = '*';
    double d = 38.125;
    ofstream file("c:\\test.txt");
    
    if (!file) 
    {
        cout << "File opening error." << endl;
        exit(1);
    }
    file<<n<<' '<<ch<<' '<<d;
    file.close(); 
    return 0;
}
