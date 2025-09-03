#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>vec;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout << "Size before pop_back = " << vec.size() << endl;

    vec.pop_back();

    cout << "Size after pop_back = " << vec.size() << endl;

    return 0;
}
