#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector<int> vec; //0

    vector<int> vec1 = {1, 2, 3}; //3
    cout << vec1[0] << endl;

    vector<char> vec2(3, 'a');

    for (char val : vec2) {
        cout << val << endl;
    }

    return 0;
}
