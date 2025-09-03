#include<iostream>
using namespace std;

void interSection(int arr1[] , int arr2[] , int intersection[] , int size1 , int size2){
    int k = 0;

    for(int i = 0 ; i < size1 ; i++){
        for(int j = 0 ; j < size2 ; j++){
            if(arr1[i] == arr2[j]){
                intersection[k] = arr2[j];
                k++;
                break;
            }
        }
    }
    for(int i = 0 ; i < k ; i++){
        cout << intersection[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1,2,3,4};
    int arr2[] = {3,4,5,6};
    int intersection[100];

    int size1 = 4;
    int size2 = 4;

    interSection(arr1,arr2,intersection,size1,size2);

    return 0;
}
