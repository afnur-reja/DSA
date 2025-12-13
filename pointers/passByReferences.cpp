// Pass by Reference : means changes will reflect in original.
// Two ways -> 1. using pointer and 2. using references (alias).

#include <iostream>
using namespace std;

// void changeA(int b){ // pass by value.
//     b = 20;
// }

// void changeA(int* ptr){ // pass by reference using pointer.
//     *ptr = 20;
// }

void changeA(int &b){ // pass by reference using alias(&PARAMETER).
    b = 20;
}

int main() {
    int a = 10;
    // changeA(a);
    // cout<<a<<endl; // output = 10

    // changeA(&a);
    // cout<<a<<endl; // output = 20

    changeA(a);
    cout<<a<<endl; // output = 20

    return 0;
}