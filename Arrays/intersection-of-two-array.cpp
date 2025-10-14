#include <iostream>
using namespace std;

void printIntersection(int array1[], int size1, int array2[], int size2){

    cout << "Intersection elements : ";
    for ( int i = 0; i < size1; i++) {
        for ( int j = 0; j < size2; j++) {
            if (array1[i] == array2[j]) {
                cout << array1[i] << " ";
                break;
            }
        }
    }
}

int main() {
    
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int sz1 = 5, sz2 = 5;
    printIntersection(arr1, sz1, arr2, sz2);

    return 0;
}