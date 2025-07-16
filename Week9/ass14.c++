#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {5, 4, 3, 2, 1};

    sort(nums.begin(), nums.end()); // method one
    for (int &i : nums)
    {
        cout << i << "\n";
    }

    cout << "========================\n";

    vector<int> nnums = {5, 4, 3, 2, 1};
    reverse(nnums.begin(), nnums.end()); // method two
    for (int &n : nnums)
    {
        cout << n << "\n";
    }

    cout << "========================\n";

    vector<int> numss = {5, 4, 3, 2, 1};

    // method three
    swap(numss[0], numss[4]);
    swap(numss[1], numss[3]);
    for (int &p : numss)
    {
        cout << p<< "\n";
    }

    return 0;
}