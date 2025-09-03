#include<iostream>
using namespace std;

int sumOFarray(int arr[] , int size){
    int sum = 0;

    for(int i = 0 ; i < size ; i++){
       sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1,2,3};
    int size = 3;

    int result = sumOFarray(arr,size);

    cout << "Sum of all elements in array is " << result << endl;

    return 0;
}
