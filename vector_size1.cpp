#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>vec;

    cout << "Size is = " << vec.size() << endl;
    
    vec.push_back(25);

    cout << "Size is = " << vec.size() << endl;

    return 0;
}
