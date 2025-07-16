#include <iostream>
using namespace std;
int main()
{
    string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
    int friends_size = size(friends);

    for (int i = 0; i < friends_size; i++)
    {
        if (i < 1 || i > 2)
        {
            continue;
        }

        cout << friends[i] << "\n";
    }

    cout << "\n============\n";

    string friend_s[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
    int friend_s_size = size(friend_s);

    int j = 0;
    while (j < friend_s_size)
    {
        if (j >= 1 && j <= 2)
        {
            cout << friend_s[j] << "\n";
        }

        j++;
    }

    return 0;
}