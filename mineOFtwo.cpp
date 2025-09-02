#include<iostream>
using namespace std;

void minOFtwo(int a , int b){

    if(a <= b){
      cout << "Min is a" << endl;
    }
    else{
        cout << "Min is b." << endl;
    }
}

int minimum(int a , int b){
    if(a <= b){
        return a;
    }
    else{
        return b;
    }
}
int main() {
    int a;
    int b;

    cout << "Enter first number : " << endl;
    cin >> a;

    cout << "Enter second number : " << endl;
    cin >> b;

    minOFtwo(a,b);

    int result = minimum(a,b);

    cout << "min is : " << result << endl;

    return 0;
}
