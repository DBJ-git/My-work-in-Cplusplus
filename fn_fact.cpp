#include<iostream>
using namespace std;

int factN(int n){
    int fact = 1;

    for(int i = 1 ; i <= n ; i++){
         fact *= i;

         cout << i;
         if(i < n){
             cout << " * ";
         }
    }
      
      cout << " = " << fact << endl;

         return fact;   
}

int main() {
    int n;

    cout << "Enter a number : " << endl;
    cin >> n;

     factN(n);

    return 0;
}
