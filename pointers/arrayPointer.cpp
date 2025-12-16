//ARRAY POINTER : In c++ the name of a array is a special pointer (constant pointer means we can not change its value through out the program) and it points to the first element of that array.


#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    cout<<arr<<endl; //Address of first value that is 1.
    cout<<*arr<<endl; //output = 1

    return 0;
}