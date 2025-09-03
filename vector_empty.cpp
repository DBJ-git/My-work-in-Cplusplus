#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>vec;

    if(vec.empty()){
        cout << "Vector is empty." << endl;
    }
    else{
        cout << "Vector is not empty." << endl;
    }

    return 0;
}
