#include<iostream>
using namespace std;

void primeN(int n){
  
for(int j = 2 ; j <= n ;j++){
      bool prime = true;
    for(int i = 2 ; i * i <= j ; i++){
        if(j % i == 0){
            prime = false;
            break;
        }
    }
    if(prime == true){
        cout << j << " ";
    }
  }
}

int main(){
    int n;

    cout << "Enter a number : " << " ";
    cin >> n;

    primeN(n);

    return 0;
}
