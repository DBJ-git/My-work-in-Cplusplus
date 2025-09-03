#include<iostream>
using namespace std;

void reverse(int arr[] , int size){
     int start = 0;
     int last = size - 1;

     while(start < last){
         swap(arr[start] , arr[last]);
         start++;
         last--;
     }
}

int main() {
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;

    reverse(arr,size);

    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << endl;
    }

    return 0;
}
