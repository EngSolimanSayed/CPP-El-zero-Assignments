// APP4 =>> Simple calculator
#include <iostream>
using namespace std;
int main()
{
    int num_one, num_two, op;

    cout << "Enter number one : ";
    cin >> num_one;
    cout << "Enter number two : ";
    cin >> num_two;
    cout <<"Note this is operation"<<"\n";
    cout << "Number 1 is Addition" << "\n";
    cout << "Number 2 is Subtraction" << "\n";
    cout << "Number 3 is Multiblkcatid" << "\n";
    cout << "Number 4 is Division" << "\n";

    cout << "Enter number of operation : ";
    cin >> op;
    if (op == 1)
    {
        cout << "Your result is " << num_one + num_two;
    }
    else if (op == 2)
    {
        cout << "Your result is " << num_one - num_two;
    }

    else if (op == 3)
    {
        cout << "Your result is " << num_one * num_two;
    }

    else if (op == 4)
    {
        cout << "Your result is " << num_one / num_two;
    }
    else
    {
        cout << "operation is not valid and check your operation";
    }

    return 0;
}