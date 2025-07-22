#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {100, 999, 10, 50}; 


    int size = 4;

    int smallestIndex, largestIndex;

    int smallest = INT_MAX;
    int largest = INT_MIN;
    

    for (int i = 0; i < size; i++){
        smallest = min(smallest, nums[i]);
        largest = max(largest, nums[i]);
    }

    for (int i = 0; i < size; i++) {
         if (nums[i] == smallest) smallestIndex = i;
         if (nums[i] == largest) largestIndex = i;
    }

    
    cout<<"Index of Largest value = "<<largestIndex<<endl;
    cout<<"Index of Smallest value = "<<smallestIndex<<endl;

    return 0;
}