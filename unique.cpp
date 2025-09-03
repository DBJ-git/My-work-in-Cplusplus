#include<iostream>
using namespace std;

void unique(int arr[] ,int size){
    for(int i = 0 ; i < size ; i++){
        int count = 0;
        for(int j = 0 ; j < size ; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {4,4,2,2,1};
    int size = 5;
    
  unique(arr,size);

    return 0;
}
