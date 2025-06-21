#include <iostream>
using namespace std;
int main () {
    
    //any number like 10.5 or 20.5 it means that it is double number
    cout <<sizeof(10.5+5+20.5+10);

    cout <<"\n==================\n";
 //numer is automatic double like 10.5 or 20.5 but when you put f behind number like 10.5 it become float 10.5f //20.5f
 
    cout <<sizeof(10.5f+5+20.5f+10);

    return 0;
}