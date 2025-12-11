#include <iostream>
using namespace std;

//FUNCTION : block of code which perform a task.

// prime or not
void isPrimeNum(int n){
    bool isPrime = true;
    for (int i=2; i <= n/2; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout<<"Prime number"<<endl;
    }else {
        cout<<"Non Prime number"<<endl;
    }
}

//2 to N prime number
void printPrime(int n){
    for(int i = 2; i<=n; i++){
        bool isPrime = true;
        for(int j = 2; j*j <= i; j++){
            if(i%j == 0){
                isPrime = false;
                break;     
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }
    }
}



//nth fibonacci.
int nthFibo(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;

    int temp;
    int n1 = 0;
    int nthTerm = 1;
    for(int i = 0; i<n-2; i++){
        temp = n1;
        n1 = nthTerm;
        nthTerm += temp;
    }

    return nthTerm;
}


int main() {
     isPrimeNum(19); 
     printPrime(20);
     cout<<nthFibo(1);

    return 0;
}