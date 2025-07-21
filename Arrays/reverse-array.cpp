// 2 Pointer approach.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sz = 5;

    int start = 0;
    int end = sz -1;

    while ( start < end ){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    

    return 0;
}