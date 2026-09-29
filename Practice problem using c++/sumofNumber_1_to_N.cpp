// Question: Calculate sum of numbers from 1 to N using function

#include<bits/stdc++.h>
using namespace std;

int sumN(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout << sumN(n) << "\n";

    return 0;
}
