#include<iostream>
using namespace std;

int main() {
    int a = 4;
    int b = 8;

    cout << (a & b) << endl;   //bitwise &
    cout << (a | b) << endl;   //bitwise |
    cout << (a ^ b) << endl;   //bitwise ^
    cout << (a << 2) << endl;   //bitewise <<
    cout << (a >> 2) << endl;  //bitwise >>
    
    return 0;
}
