#include<bits/stdc++.h>
using namespace std;

int binToDecimal(int binNum){
    int ans = 0;
    int pow = 1;

    while (binNum)
    {
        int rem = binNum % 10;
        binNum /= 10;

        ans += (rem * pow);
        pow *= 2;
    }
    return ans;
    
}
int main(){
    int binNum;
    cin >> binNum;
    cout << binToDecimal(binNum) << "\n";
    return 0;
}