#include <iostream>
using namespace std;
int main()
{
    int num = 100;
    int *ptr = &num;
    cout << "Adress is: " << ptr << "\n";
    cout << "Adress is: " << &num << "\n";
    cout << "Value is: " << *ptr << "\n";
    cout << "Adress is: " << num << "\n";
    cout << "\n==================\n";
    *ptr = 500;
    cout << "Adress is: " << ptr << "\n";
    cout << "Adress is: " << &num << "\n";
    cout << "Value is: " << *ptr << "\n";
    cout << "Adress is: " << num << "\n";
    cout << "\n==================\n";
    int nums[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *pot = &nums[0];


    cout<<"First element is\n";
    cout << "Adress is: " << pot << "\n";
    cout << "Adress is: " << &nums[0]<< "\n";
    cout << "Value is: " << *pot << "\n";
    cout << "Adress is: " << nums[0] << "\n";
   
    

    cout<<"Second element is\n";
    cout << "Adress is: " << pot+1 << "\n";
    cout << "Adress is: " << &nums[1]<< "\n";
    cout << "Value is: " << *(pot+1) << "\n";
    cout << "Adress is: " << nums[1] << "\n";


    //cstyle
    //cout<<*(int*)ptr<<"\n";
    
    //modern
    //cout<<*static_cast<int *>(ptr)<<"\n";

    return 0;
}