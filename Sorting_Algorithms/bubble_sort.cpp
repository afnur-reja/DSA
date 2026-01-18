#include <iostream>
using namespace std;

//process : (n-1) times iteration --> adjacent elem comparison --> pushing the larger elem to the last by swaping (in every iteration).

void bubbleSort (int array[], int n) {
    
    for (int i = 0; i < (n-1); i++) {
        for (int j = 0; j < (n-i-1); j++) {
            if ( array[j] > array[j+1]) {
                swap(array[j], array[j+1]);
            }
        }
    }
}


void OptimizedBubbleSort (int array[], int n) {
    
    for (int i = 0; i < (n-1); i++) {
        bool isSort = false;
        for (int j = 0; j < (n-i-1); j++) {
            if ( array[j] > array[j+1]) {
                swap(array[j], array[j+1]);
                isSort = true;
            }
        }

        if (!isSort) { // array is already sorted
            return;
        }
    }
}

int main() {
    
    int arr[5] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);
    bubbleSort(arr, size);

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}