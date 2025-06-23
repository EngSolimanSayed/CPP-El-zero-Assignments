// App 5 => Award System Application
#include <Iostream>
using namespace std;
int main()
{
    int num;
    cout <<"Enter your number : ";
    cin >>num;
    switch (num)
    {
    case 100:
    case 110:
    case 120:
       cout <<"congratulation for Iphone";
        break;
    case 200:
    case 210:
    case 220:
       cout <<"congratulation for Ipad";
        break;
    case 300:
    case 310:
    case 320:
       cout <<"congratulation for Mac";
        break;
    case 400:
    case 410:
    case 420:
       cout <<"congratulation for PC";
        break;
    case 500:
    case 510:
    case 520:
       cout <<"congratulation for TV";
        break;
    case 600:
    case 610:
    case 620:
       cout <<"congratulation for Playstation";
        break;
    
    default:
        cout <<"No AWard for this number";
    }
    return 0;

}