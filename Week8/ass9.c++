#include <iostream>
using namespace std;
/*
num1[]=>>array
num2=>>sizeof array
num3=>>the number we will exclude from the calculation
*/
int sumall(int num1[], int num2, int num3)
{
    int result=0;
    for (int i = 0; i < num2; i++)
    {
        if (num1[i]==num3)
        {
            continue;
        }
        result+=num1[i];  
    }
    return result;   
}
int main()
{
    int numbers[] = {13, 20, 3, 30, 5, 7, 40, 13};
    int numssize = size(numbers);
    int noneed = 13;
    cout << sumall(numbers, numssize, noneed) << "\n";
    return 0;
}