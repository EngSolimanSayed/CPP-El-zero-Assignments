#include <iostream>
using namespace std;
int main () {
    double salary=5000.98;
    cout <<sizeof(salary)<<"\tBytes"<<"\n" ;
   int sum=sizeof(salary)*8;
    cout <<sum<<"\tBits";
    return 0;
}