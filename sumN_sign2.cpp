#include<iostream>
using namespace std;

int sumN(int n){
    int sum = 0;
    int i = 0;


    while(i <= n){
        sum += i;

        cout << i;
        if(i < n){
            cout << " + ";
        }
        i++;
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
