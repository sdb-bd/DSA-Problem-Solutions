#include<bits/stdc++.h>
using namespace std;

int reverseInteger(int n){
    int reverse = 0;

    while(n!=0){
        int digit = n%10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    return reverse;
}

int main(){
    int n;
    cin>>n;
    cout << reverseInteger(n) << '\n';
}