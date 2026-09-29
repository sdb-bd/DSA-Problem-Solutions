#include<bits/stdc++.h>
using namespace std;

int decToBinary(int decNum){
    int ans = 0;
    int pow = 1;

    while (decNum)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
    
}
int main(){
    int decNum;
    cin >> decNum;
    cout << decToBinary(decNum) << "\n";
    for(int i=1;i<=10;i++){
        cout << decToBinary(i) << "\n";
    }
    return 0;
}