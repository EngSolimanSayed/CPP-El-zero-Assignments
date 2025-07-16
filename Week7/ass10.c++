#include <iostream>
using namespace std;
int main()
{
    string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
    int size_friends = size(friends);
    for (int i = 0; i < size_friends; i++)
    {
        if (friends[i][0] == 'A')
        {
            cout << friends[i] << "\n";
        }
    }
    cout << "\n==================\n";
    string friendss[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
    int size_friendss = size(friendss);
    int j = 0;
    while (j < size_friendss)
    {
        if (friendss[j][0] == 'A')
        {
            cout << friendss[j] << "\n";
        }
        j++;
    }

    return 0;
}