#include <iostream>
using namespace std;
int main()
{
    int check = 25;
    int nums[]{40, 20, 30, 70, 100};

    if (nums[0] > check)
    {

        cout << "{" << nums[0] << "}" << " + " << "{" << nums[3] << "}" << " = " << nums[0] + nums[3]<<"\n";
    }
    if (nums[1] > check)
    {

        cout << "{" << nums[1] << "}" << " + " << "{" << nums[3] << "}" << " = " << nums[1] + nums[3];
    }
    if (nums[2] > check)
    {

        cout << "{" << nums[2] << "}" << " + " << "{" << nums[3] << "}" << " = " << nums[2] + nums[3];
    }

    return 0;
}