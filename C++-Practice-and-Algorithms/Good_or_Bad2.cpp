#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s='010' || s='101') cout<<"Good";
        else cout<<"Bad";
    }
}