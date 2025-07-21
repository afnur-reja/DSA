#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int sum = 0;
    //using for loop
    for(int i=1; i<=10; i++){
        if(i%3 == 0){
            sum += i;
        }
    }

    //using while loop
    // int i = 1;
    // while(i<=n){
    //     if(i%3 == 0){
    //         sum += i;
    //     }
    //     i++;
    // }

    cout<<"sum ="<< sum <<endl;
    return 0;
}