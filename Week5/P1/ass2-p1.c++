#include <iostream>
using namespace std;
int main()
{
    int age, points;
    cout << "Enter your age : ";
    cin >> age;
    cout << "Enter your points : ";
    cin >> points;
    if (age > 18)
    {
        cout << "Yes Age Is Ok"<<"\n";
    }
    else
    {
        cout << "No Age Is Not Ok"<<"\n";
    }
    if (points > 500)
    {
        cout << "Yes Points Is Ok"<<"\n";
    }
    else
    {
        cout << "No Points Is Not Ok"<<"\n";
    }

    return 0;
}