#include <iostream>
using namespace std;

int main() {
    int n = 10;
    char ch = 'A';

    //butterfly pattern
    //top
    for(int i=0; i<n; i++){

        //stars
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }

        //spaces
        for(int j=0; j<(n-i-1)*2; j++){
            cout<<" ";
        }

        //stars
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }

        cout<<endl;

    }
    //bottom
    for(int i=0; i<n; i++){

        //stars
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }

        //spaces
        for(int j=0; j<i*2; j++){
            cout<<" ";
        }

        //stars
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }

        cout<<endl;


    }
    
    cout<<"\n\nInverted Triangle pattern\n\n";
    
    //inverted triangle pattern
    for(int i=0; i<n; i++){

        //spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }

        //for stars
        for(int j=0; j<n-i; j++){
            cout<<ch;
        }

        ch++;
        cout<<endl;
    }

    cout<<"\n\nFloyd's Triangle Pattern\n\n";

    // Floyd's Triangle Pattern.
    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    
    cout<<"\n\nReverse triangle pattern\n\n";
     
    //Reverse triangle pattern.
    for (int i=0; i<n; i++){
        char ch = 'A' + i; 
        for (int j=0; j<i+1; j++){
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }

    return 0;
}