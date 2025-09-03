#include<iostream>
using namespace std;

int productOFarray(const int arr[] , int size){
    int product = 1;
              
    for(int i = 0 ; i < size ; i++){
       if(arr[i] % 2 == 0) {
        product *= arr[i];
    }
    }
    return product;
}

int main() {
    int arr[]= {1,2,3};
    int size = 3;

    int result = productOFarray(arr,size);

    cout << "Product of all even elements in array is " << result << endl;

    return 0;
}
