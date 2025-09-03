#include<iostream>
using namespace std;

void linearSearch(int arr[] , int size , int target){
    bool found = false;
    int index = -1;

    for(int i = 0 ; i < size ; i++){
        
        if(target == arr[i]){
            found = true;
            index = i;
            break;
        }
    }
    if(found == true){
        cout << "Yes,Our number is available in this array at index " << index <<  endl;
    }
    else{
        cout << "No,Our number is not available in this array." << endl;
    }
}

int main() {
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;
    int target = 8;

    linearSearch(arr,size,target);
    
    return 0;
}
