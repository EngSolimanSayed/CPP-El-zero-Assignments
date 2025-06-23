// App 6 => Discount Application
#include <iostream>
using namespace std;
int main ()
{
    int price,discount=0,years;
    cout<<"Enter The Price : ";
    cin >>price;
    cout <<"Enter years of working in company: ";
    cin >>years;
    switch (years)
    {
    case 1:
       discount=10;
        break;
        case 2:
        discount=30;
        break;
        case 3:
        discount=40;
        break;
        case 4:
        discount=70;
        break;
        case 5:
        discount=100;
        break;
    }
   cout << "The Price Is " << price - discount << "\n";



    return 0;
}
