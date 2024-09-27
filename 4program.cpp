#include <iostream>
#include <cstdlib> // Standard C++ header for exit()
#include <fstream> // For file handling
using namespace std;

int main()
{
    char city[50]; // Buffer to hold city names

    // Corrected file path
    ifstream file("c:\\city.txt");
    if (!file) // Check if the file opened successfully
    {
        cerr << "Error opening file." << endl;
        return 1; // Use return instead of exit for better practice in main()
    }

    cout << "The list of cities is as follows:" << endl;

    // Improved loop to avoid using eof() directly
    while (file >> city)
    {
        cout << city << endl;
    }

    file.close(); // Always close the file after use

    // Optional: Wait for input before closing the program
    cout << "Press Enter to exit...";
    cin.get(); // Read newline left in the buffer
    cin.get(); // Wait for user to press Enter

    return 0;
}
