#include <iostream>
using namespace std;

int main() {
    // To get address of a variable we use addressof operator(&).
    int n = 1;
    cout<<&n<<endl; //address of 'n' variable


    //POINTER : special variable that stores address of other variable.
    int* ptr = &n; // * represents that it is a pointer variable.
    cout<<ptr<<endl;


    //POINTER TO POINTER : pointer which points/stores address of another pointer.
    int** parPtr = &ptr; //int* is the data type of 'ptr' variable, so we use another * to make it pointer.
    cout<<&ptr<<endl;
    cout<<parPtr<<endl;


    //DEREFERENCE OPERATOR (*) : give the value at the given address.
    cout<<*(&n)<<endl; //output = 1
    cout<<*(ptr)<<endl; //output = 1
    cout<<*(parPtr)<<endl; //output will be address of 'n' variable because 'parPtr' stores the address of 'ptr' variable which stores the address of 'n' variable.
    cout<<**(parPtr)<<endl; //output = 1 . double derefernce.

    return 0;
}