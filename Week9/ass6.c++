#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> numbers = {10, 20, 10, 40, 50, 60, 10, 80};
    int check = 10;
    int countone = 0;
    int counttwo = 0;
    // method1
    int CountTimes = count(numbers.begin(), numbers.end(), check);
    countone += CountTimes;
    counttwo += CountTimes;
    cout << countone << "\n";
    cout << counttwo << "\n";
    cout << "==\n";
    vector<int> nums = {10, 20, 10, 40, 50, 60, 10, 80};
    int checkk = 10;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums.at(i) == check)
        {
            count1++;
            count2++;
        }
    }
    cout << count1 << "\n";
    cout << count2 << "\n";

    return 0;
}