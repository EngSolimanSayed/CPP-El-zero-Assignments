#include <iostream>
using namespace std;

int main() {
    int a = 69;
    int b = 108;
    int c = 122;
    int d = 101;
    int e = 114;
    int f = 111;

    cout << "Character Of This ASCII Value " << a << " Is " << char(a) << endl;
    cout << "Character Of This ASCII Value " << b << " Is " << char(b) << endl;
    cout << "Character Of This ASCII Value " << c << " Is " << char(c) << endl;
    cout << "Character Of This ASCII Value " << d << " Is " << char(d) << endl;
    cout << "Character Of This ASCII Value " << e << " Is " << char(e) << endl;
    cout << "Character Of This ASCII Value " << f << " Is " << char(f) << endl;

    cout << char(a) << char(b) << char(c) << char(d) << char(e) << char(f) << endl;

    return 0;
}