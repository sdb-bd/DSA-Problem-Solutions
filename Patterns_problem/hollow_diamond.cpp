#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    // top
    for(int i=0; i<n; i++){
        // spaces1
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout<< "*";

        if( i != 0){
            //speces2
            for(int j=0; j<2*i-1; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }
    // bottom
    for(int i=0; i<n; i++){
        // spaces
        for(int j=0; j<i+1; j++){
            cout << " ";
        }
        cout << "*";
        
        if(i != n-2){
            // spaces
            for(int j=0; j< 2*(n-2-i)-1; j++){
                cout<< " ";
            }
            cout << "*";
        }
        cout<< "\n";
    }
    return 0;
}