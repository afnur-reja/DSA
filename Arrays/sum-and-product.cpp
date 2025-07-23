#include <iostream>
using namespace std;

int sumOfArray(int array[], int size){
   int sum = 0;

   for (int i = 0; i < size; i++) {
      sum += array[i];
   }

   return sum;
}

int productOfArray(int array[], int size){
   int product = 1;

   for (int i = 0; i < size; i++) {
      product *= array[i];
   }

   return product;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sz = 5;

    cout<<"Sum of Array : "<<sumOfArray(arr, sz)<<endl;
    cout<<"Product of Array : "<<productOfArray(arr, sz)<<endl;

    return 0;
}