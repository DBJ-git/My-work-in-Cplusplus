#include<iostream>
using namespace std;

int main() {
    int arr[] = {5,15,22,1,-15,24};
    int size = 6;

    int smallest = INT_MAX;

    for(int i = 0 ; i < size ; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    cout << "Smallest value is : " << smallest << endl;

    return 0;
}
