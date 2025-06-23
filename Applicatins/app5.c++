// App3 =>>USer Rank checker
#include <iostream>
using namespace std;
int main()
{

    int points;
    cout << "Enter your points: ";
    cin >> points;
    if (points > 0 && points <= 500)
    {
        cout << "Not Bad";
    }
    else if (points > 500 && points <= 1000)
    {
        cout << "Very good";
    }
    else if (points > 1000)
    {
        cout << "VIP";
    }
    else
    {
        cout << "No rank";
    }

    return 0;
}