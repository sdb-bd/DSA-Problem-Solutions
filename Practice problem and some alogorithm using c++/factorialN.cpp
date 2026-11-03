// Qs: Calculate N factorial

#include<bits/stdc++.h>
using namespace std;

int factorialN(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n;
    cout << "Take the number for factorial  : ";
    cin >> n;
    cout << factorialN(n);


    return 0;
}