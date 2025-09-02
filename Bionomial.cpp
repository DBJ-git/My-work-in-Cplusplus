#include<iostream>
using namespace std;

int fact(int j){
    int into = 1 ;

    for(int i = 1 ; i <= j ; i++){
        into *= i;
    }
    return into;
}

int main() {
    int n;
    int r;

    cout << "Enter the value of n : " << " ";
    cin >> n;

    cout << "Enter the value of r : " << " ";
    cin >> r;

    int result = fact(n) / (fact(r) * fact(n-r));

    cout << "Bionomial is : " << result << endl;

    return 0;
}
