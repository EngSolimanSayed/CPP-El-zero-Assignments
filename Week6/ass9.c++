#include <iostream>
#include<iterator>
using namespace std;
int main()
{
    int nums[] = {10, 20, 30, 40, 20, 50};
    //method1
    cout <<sizeof(nums)/sizeof(nums[0]);
    cout <<"\n================\n";
    //method2
    cout <<size(nums);
    cout <<"\n================\n";
    //method3
    cout << end(nums) - begin(nums);
    return 0;
}