#include <iostream>
using namespace std;
// num1==>>array
// num2==>>number of elements in array
int firsetnegative(int num1[], int num2)
{
    int biggest=-500;
    for (int i = 0; i <num2 ; i++)
    {
        if (num1[i]<0&&num1[i]>biggest)
        {
           biggest=num1[i]; 
        }
        
    }
    return biggest;
}
int main()
{
    int numbers[]={-10,-20,15,100,10,5,-50,0,-5,-10};
    int numssize=size(numbers);
    cout <<firsetnegative(numbers,numssize)<<"\n";
    return 0;

}