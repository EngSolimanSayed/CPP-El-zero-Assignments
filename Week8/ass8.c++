#include <iostream>
using namespace std;
int plusandmultiply(int num[], int numsize)
{
    int result = 0;
    int resultt = 1;
    for (int i = 0; i < numsize; i++)
    {
        if (num[i] % 2 == 0)
        {
            result += num[i];
        }

        if (num[i] % 2 != 0)
        {
            resultt *= num[i];
        }
    }
    return result + resultt;
}
int main()
{
    int numbers[] = {10, 20, 3, 30, 5, 7, 40};
    int numssize = size(numbers);
    cout << plusandmultiply(numbers, numssize)<<"\n";
    return 0;
}