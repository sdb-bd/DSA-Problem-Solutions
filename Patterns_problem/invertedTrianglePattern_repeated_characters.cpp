#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    char ch = 'A';
    for(int i=0; i<n; i++){
        // for spaces
        for(int j=0; j<i; j++){
            cout<< " ";
        }
        // for characters
        for(int j=0; j<n-i; j++){
            cout << ch;
        }
        ch++;
        cout << "\n";
    }
    return 0;
}