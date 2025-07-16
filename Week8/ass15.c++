#include <iostream>
using namespace std;
float avg(int arr[], int arrsize)
{
   float average = 0;
    for (int i = 0; i < arrsize; i++)
    {
        average += arr[i];
    }
    return average / arrsize;
}
int main()
{
    int money[]={10,20,15,25,30,35};
    int monsize=size(money);
    cout <<avg(money,monsize);
    return 0;
}