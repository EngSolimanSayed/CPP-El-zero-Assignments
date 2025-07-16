//Count Positive & Even Numbers Only
#include <iostream>
using namespace std;
int main()
{
    int result=0;
    int nums[] = {10, 20, -20, 13, 30, -30, 40};
    int num_size=sizeof(nums)/sizeof(nums[0]);
    for (int i = 0; i < num_size; i++)
    {
        if (nums[i] > 0 && nums[i]%2==0)
        {
            result+=nums[i];
        }  
    }
    cout <<"Result is = "<<result;
    
     return 0;

}