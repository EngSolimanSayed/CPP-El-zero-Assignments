#include <iostream>
using namespace std;
int main()
{
    string names[3][3] = {
        {"Ahmed", "Mahdy", "Majed"},
        {"Adel", "Gamal", "Mahmoud"},
        {"Sayed", "Sameh", " Mohamed"}};
    cout << "First Collection Of Names:\n";
    cout << names[0][0] << "\n"; // Ahmed
    cout << names[1][1] << "\n"; // Mahdy
    cout << names[2][2] << "\n"; // Majed

    cout << "Second Collection Of Names:\n";
    cout << names[2][1] << "\n"; // Adel
    cout << names[1][2] << "\n"; // Gamal
    cout << names[0][2] << "\n"; // Mahmoud

    cout << "Third Collection Of Names:\n";
    cout << names[0][1] << "\n"; // Sayed
    cout << names[1][0] << "\n"; // Sameh
    cout << names[2][0] << "\n"; // Mohamed
    return 0;
}