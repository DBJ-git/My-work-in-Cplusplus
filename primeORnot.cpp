#include<iostream>
using namespace std;

void primeORnot(int n){

    if(n <= 1){
        cout << "Number is not prime." << endl;
        return;
    }
    
    bool prime = true;

    for(int i = 2 ; i*i <= n ; i++){
        if(n % i == 0){
           prime = false;
           break;
        }
    }

    if(prime == true){
        cout << "Number is Prime." << endl;
    }
    else{
        cout << "Number is not prime." << endl;
    }
}

int main() {
    int n;

    cout << "Enter a number : " << " ";
    cin >> n;

    primeORnot(n);
     
    return 0;
}
