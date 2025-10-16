#include<iostream>
#include<vector>
using namespace std;

int main () {
    // vector<int> vec;
    vector<int> vec1 = {1, 2, 3}; //3
    // cout << vec1[0] << endl;
    
    vector<char> vec2(3, 'a');
    
    // for (char val : vec2) {
    //     cout << val << endl;
    // }
    
    //some properties and methods of vector
    vector<int> vec; //0
    cout << "before push_back size : " << vec.size() << endl;
    vec.push_back(1); // add elements to the last of the vector
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    cout << "after push_back size : " << vec.size() << endl;
    vec.pop_back(); // removes the last element. here, 4
    cout << vec.front() << endl; // gives first element. 
    cout << vec.back() << endl; // gives last element.
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    return 0;
}
