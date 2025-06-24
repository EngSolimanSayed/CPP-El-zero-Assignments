#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "Enter day : ";
    cin >> day;
    switch (day)
    {
    case 1:
    case 2:
    case 3:
        cout << day << "  Shop Is Open";
        break;
    case 4:
    case 5:
        cout << day << "  Shop Is closed";
        break;

    default:
        cout << "Day Is Not Valid";

        break;
    }
    return 0;
}