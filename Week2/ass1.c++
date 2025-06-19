#include <iostream>
using namespace std;
int main(){
    int age,period;
    cout <<"Enter your age : ";
    cin >> age;
    cout <<"Enter your period : ";
    cin >> period;
      cout << "My Age Is: " << age << "\n";
  cout << period << " Years Ago My Age Was: " << age - period << "\n";
 cout << "After " << period << " Years My Age Will Be: " << age + period << "\n";
    return 0;
}