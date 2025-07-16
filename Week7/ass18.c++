#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 1000; i+=100)
    {
        int temp=i+100;
        if (temp==1000)
        {
            break;
        }
        
        cout<<temp<<"\n";
    }
    return 0;
}