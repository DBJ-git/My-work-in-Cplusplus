#include<iostream>
#include<cmath>
using namespace std;

int numSum(int num){
    int sum = 0;
    num = abs(num);                                // it convert negative int to positive int

    while(num > 0){
        int rem = num % 10;
        num /= 10;
        sum += rem;

    }
     return sum;
}

int main() {
    int num;

    cout << "Enter a number : " << " ";
    cin >> num;

    int result = numSum(num);

    cout << "Sum of all digit is : " << result << endl;

    return 0;
}
