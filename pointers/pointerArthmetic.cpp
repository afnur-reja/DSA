// Arthmetic operations on pointers

#include <iostream>
using namespace std;

int main() {
    // increment (++) / decrement(--) : On pointer increment/decrement --> 1 = number of byte of the pointer data type (e.g., int = 4 byte )
    int a = 10;
    int* ptr = &a;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl; // +4 

    return 0;
}