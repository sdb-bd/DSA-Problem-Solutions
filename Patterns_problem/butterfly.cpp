#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // top
    for(int i=0; i<n; i++){

        // left stars
        for(int j=0; j<i+1; j++){
            cout << "*";
        }

        // middle spaces
        for(int j=0; j<2*(n-i)-1; j++){
            cout << " ";
        }

        // right stars
        for(int j=0; j<i+1; j++){
            cout << "*";
        }

        cout << "\n";
    }

    // bottom
    for(int i=n-2; i>=0; i--){

        // left stars
        for(int j=0; j<i+1; j++){
            cout << "*";
        }

        // middle spaces
        for(int j=0; j<2*(n-i)-1; j++){
            cout << " ";
        }

        // right stars
        for(int j=0; j<i+1; j++){
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}