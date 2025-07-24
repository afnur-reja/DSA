#include <iostream>
#include <climits>
using namespace std;

//first occurrence
void swapMinMax(int array[], int size) {
    int smallestIndex = 0, largestIndex = 0;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
            smallestIndex = i;
        }
        if (array[i] > largest) {
            largest = array[i];
            largestIndex = i;
        }
    }

    swap(array[smallestIndex], array[largestIndex]);
}

int main() {
    int nums[] = {100, 999, 10, 50};
    int size = sizeof(nums) / sizeof(nums[0]);

    swapMinMax(nums, size);

    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
