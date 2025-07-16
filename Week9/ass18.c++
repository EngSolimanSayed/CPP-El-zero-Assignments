#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> firstnumbers = {10, 30, 50, 70};
    vector<int> secondnumbers = {20, 40, 60, 80};
    vector<int> numbers;
    numbers.insert(numbers.begin(), firstnumbers.begin(), firstnumbers.end());
    numbers.insert(numbers.end(), secondnumbers.begin(), secondnumbers.end());
    sort(numbers.begin(), numbers.end());
    for (int i : numbers)
    {
        cout << i << "\n";
    }

    return 0;
}