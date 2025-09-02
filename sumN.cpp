#include<iostream>
using namespace std;

int sumN(int n){
    int sum = 0;

    for(int i = 0 ; i <= n ; i++){
        sum += i;
    }
    return sum;
}

int main() {
    int n;

    cout << "Enter the number : " <<  endl;
    cin >> n;

    int result = sumN(n);

    cout << "Sum is : " << result << endl;

    return 0;
}
