#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>vec(3,0);

    for(int i : vec){           //for each loop
        cout << i << endl;
    }

    return 0;
}
