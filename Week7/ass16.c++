#include <iostream>
using namespace std;
int main()
{
    int index=10;
    int jump=2;
    for (;;)
    {
        if (index<=jump)
        {
            break;
        }
        cout<<index<<"\n";
        index-=jump;
        
    }
    
    return 0;
}