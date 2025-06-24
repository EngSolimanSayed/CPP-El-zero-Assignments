#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter your year : ";
    cin >> year;
    switch (year)
    {
    case 1982:
        cout << "My Birth Day";
        break;
    case 1989:
        cout << "My First Work";
        break;
    case 1995:
        cout << "Windows 95";
    case 2000:
        cout << "Windows Millennium";
    case 2002:
        cout << "Created My vBulletin Forum";

    default:
        cout << "No Events in This Year";
        break;
    }

    return 0;
}