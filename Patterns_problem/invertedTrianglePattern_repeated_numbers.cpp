#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int num = 1;
    for(int i=0; i<n; i++){
        // for spaces
        for(int j=0; j<i; j++){
            cout<< " ";
        }
        // for nums
        for(int j=0; j<n-i; j++){
            cout << i+1;
        }
        cout << "\n";
    }
    return 0;
}