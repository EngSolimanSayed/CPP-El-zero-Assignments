#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Please Enter A Number Between 0 And 150 = ";
    cin >> num;
    if (num < 10)
    {
        cout << "Number is = " << "00" << num;
    }
    else if (num > 10 && num < 100)
    {
        cout << "Number is = " << "0" << num;
    }
    else if (num >= 100)
    {
        cout << "Number is = " << num;
    }
    else
    {
        cout <<"Check your Number";
    }

    return 0;
}