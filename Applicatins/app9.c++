// App 7 => Simple Calculator
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
    switch (op)
    {
    case 1:
        cout << "Your result is " <<  num_one  <<" + "<< num_two <<" = "<< num_one + num_two;
        break;
    case 2:
        cout << "Your result is " <<  num_one  << " - "<< num_two <<" = "<< num_one - num_two;
        break;
    case 3:
        cout << "Your result is " <<  num_one  <<" * "<< num_two <<" = "<< num_one * num_two;
        break;
    case 4:
        cout << "Your result is " <<  num_one  <<"  /  "<< num_two <<" =  "<< num_one / num_two;
        break;
    
    default:
      cout << "operation is not valid and check your operation";
        break;
    }
    return 0;
}
