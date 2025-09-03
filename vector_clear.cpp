#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>vec = {1 , 2 , 3};

    cout << "Size before vec.clear = " << vec.size() << endl;

    vec.clear();

    cout << "Size after vec.clear = " << vec.size() << endl;

    return 0;
}
