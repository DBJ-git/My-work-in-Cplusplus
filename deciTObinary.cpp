#include<iostream>
using namespace std;

int deciTObinary(int n){
    int sum = 0;
    int pow = 1;

while(n > 0) {
    int rem = n % 2;
    n /= 2;
    sum += (pow * rem);
    pow *= 10;
}

return sum;
}

int main() {
    int n;

    cout << "Enter a number : " << " ";
    cin >> n;

   int result = deciTObinary(n);

   cout << "Binaray form : " << result << endl;

    return 0;
}
