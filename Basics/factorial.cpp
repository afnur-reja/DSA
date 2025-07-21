#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int fact = 1;
    
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    
    cout<<"factorial = "<<fact<<endl;

    return 0;
}