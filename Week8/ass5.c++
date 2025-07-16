// method1
#include <iostream>
#include <cmath>
using namespace std;
void thepower(int base, int power)
{
    cout << pow(base, power) << "\n";
    cout<<"===========\n";
    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result *= base;
    }
    cout<<"2*2*2*2*2  = " <<result<<"\n";
    
}
int main()
{
    thepower(2, 5);
    return 0;
}