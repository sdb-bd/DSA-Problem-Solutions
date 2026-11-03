// Qs. Calculate sum of digits of a number using function

# include<bits/stdc++.h>
using namespace std;

int sumOfdigits(int num){
    int sum = 0;
    
    for(int i=0; i<num; i++){
        int lastDig = num % 10;
        num /=10;
        sum += lastDig;
    }
    return sum;
}
int main(){
    int num;
    cin>>num;
    cout << sumOfdigits(num);
    return 0;
}