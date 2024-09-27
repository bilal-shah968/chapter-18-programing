#include <iostream>
#include <fstream>

int main()
{
    char ch;
    std::ofstream out("c:\\chars.txt");
    if (!out) {
        std::cerr << "Error opening file!";
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter a character: ";
        std::cin >> ch;
        out.put(ch);
    }
    
    out.close();
    
    // Pause the console to view the output, works on Windows
    system("pause");

    return 0;
}
