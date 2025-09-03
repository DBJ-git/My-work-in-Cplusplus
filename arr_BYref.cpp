#include<iostream>
using namespace std;

void passBYref(int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
        arr[i] *= 2;
    }
}

int main() {
    int arr[] ={1,2,3};
    int size = 3;

    passBYref(arr,size);

    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << endl;
    }

    return 0;
}
