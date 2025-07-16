#include <iostream>
#include<limits.h>
using namespace std;
// num1=>>array
// num2=>>sizeofarray
int minpositive(int num1[], int num2)
{
    int smallest=50;
    for (int  i = 0; i < num2; i++)
    {
       if (num1[i]>0&&num1[i]<smallest)
       {
       smallest=num1[i];
       }
       
    }
    return smallest;
    
}
int main()
{
    int numbers[]={-10,-20,15,100,10,5,-50,0};
    int numssize=size(numbers);
    cout<<minpositive(numbers,numssize)<<"\n";
    return 0;
}