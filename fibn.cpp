#include<iostream>
using namespace std;

int fibN(int n) {

    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }

    int fibNm1 = fibN(n - 1);
    int fibNm2 = fibN(n - 2);

    return fibNm1 + fibNm2;
}

int main() {
    int n;

    cout << "Enter a number: " << " ";
    cin >> n;

    int result = fibN(n);

    cout << "Fibonacci is: " << result << endl;

    return 0;
}
