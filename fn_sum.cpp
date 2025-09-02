#include<iostream>
using namespace std;

void Sum(int a , int b){

    cout << "Sum is : " << (a+b) << endl;

}

int sum(int a , int b){
    int plus = 0;

    plus = a+b;

    return plus;
}

int main() {
    int a;
    int b;

    cout << "Enter the first number : " << endl;
    cin >> a;

    cout << "Enter the second number : " << endl;
    cin >> b;

   Sum(a,b);

   int result = sum(a,b);

   cout << "sum is : " << result << endl;

    return 0;
}
