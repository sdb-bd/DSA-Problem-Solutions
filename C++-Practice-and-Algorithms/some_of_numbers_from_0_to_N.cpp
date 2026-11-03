#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        count++;
        sum+=count;
    }
    cout<<sum;
}