#include <iostream>
using namespace std;

void printAllUnique(int array[], int size) {

    for (int i = 0; i < size; i++) {

        bool unq = true;
        for (int j = 0; j < size; j++) {
            if ( i != j && array[i] == array[j]) {
               unq = false;
            } 
        }

        if (unq) {
            cout << array[i] << " ";
        }
    }

}

int main() {
    
    int arr[] = {1, 2, 2, 3, 4, 5, 1, 6, 0, 0};
    int sz = 10;

    printAllUnique(arr, sz);

    return 0;
}