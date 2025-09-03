#include<iostream>
using namespace std;

int binaryTodeci(int n){
    int sum = 0;
    int pow = 1;

    while(n > 0) {
        int rem = n % 10;
        n /= 10;
        sum += (pow * rem);
        pow *= 2;
    }

    return sum;
}

int main() {
    int n;

    cout << "Enter a number : " << " ";
    cin >> n;

   int result = binaryTodeci(n);

   cout << "Decimal form : " << result << endl;

    return 0;
}
