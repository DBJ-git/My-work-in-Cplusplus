#include<iostream>
using namespace std;

int main() {
    int arr[] = {5,15,22,-15,24};
    int size = 6;

    int biggest = INT_MIN;

    for(int i = 0 ; i < size ; i++){
        if(arr[i] > biggest){
            biggest = arr[i];
        }
    }

    cout << "Biggest value is : " << biggest << endl;

    return 0;
}
