#include<iostream>
using namespace std;

int sumN(int n){
    int sum = 0;

    for(int i = 0 ; i <= n ; i++){
        sum += i;

        // Print the number and plus sign
        cout << i;
        if(i < n){
            cout << " + ";
        }
    }

    cout << " = " << sum << endl;

    return sum;
}

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    sumN(n);

    return 0;
}
