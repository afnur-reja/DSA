#include <iostream>
#include <climits> 
using namespace std;

int main() {
    int nums[] = {5, 15, 9, 1, -15, 25};
    int size = 6;
    
    int largest = INT_MIN;
    int smallest = INT_MAX;

    for (int i = 0; i < size; i++){
        smallest = min(smallest, nums[i]);
        largest = max(largest, nums[i]);
    }

    cout<<"Largest = "<<largest<<endl;
    cout<<"Smallest = "<<smallest<<endl;


    return 0;
}