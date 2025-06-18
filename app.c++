#include <iostream>
using namespace std;

int main(void) {
    cout << "====================================\n";
    cout << "== Calculate Your Age Application ==\n";
    cout << "====================================\n";

    int age;
    cout << "Enter your age : ";  
    cin >> age;                 

    cout << "Your age is : " << age << endl;

    int age_in_days = age * 365;
    int age_in_hours = age_in_days * 24;
    int age_in_minutes = age_in_hours * 60;
    int age_in_seconds = age_in_minutes * 60;

    cout << "Your age in days    : " << age_in_days << endl;
    cout << "Your age in hours   : " << age_in_hours << endl;
    cout << "Your age in minutes : " << age_in_minutes << endl;
    cout << "Your age in seconds : " << age_in_seconds << endl;

    return 0;
}
