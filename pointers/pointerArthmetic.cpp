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

    // Add or Subtract Number --> we can also use this logic in Array because contiguous memory allocation.
    // ptr + 1 --> mean adding 1 times of int (4 byte)
    // ptr + 3 --> mean adding 3 times of int (12 byte)
    cout<<ptr + 2<<endl; // 2 (times of int) * 4 that is adding 8 byte

    int arr[] = {1, 2, 3, 4};
    cout<<*(arr)<<endl;  // output = 1
    cout<<*(arr+1)<<endl; // output = 2
    cout<<*(arr+2)<<endl; // output = 3
    cout<<*(arr+3)<<endl; // output = 4


    // Subract Pointer : We can subtract pointer of same type(eg int) (can not be added) . result = number of blocks(places) remain after subtracted, of type (eg int)
    int* ptr1;
    int* ptr2 = ptr1 + 2; //adding 8 bytes
    cout << ptr2 - ptr1 << endl; //output = 2 . beacuse after subtarcted 2 blocks(places of memory location that is 8 byte) of int type.



    // We can compare pointers / perform relational operations (==, !=, <, <=, >, >=) . 1 for true and 0 for false.
    int* pt1;
    int* pt2;
    cout<< (pt1<pt2) <<endl; // also other operations like this
    

    return 0;
}