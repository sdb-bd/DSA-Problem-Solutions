#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int sz,int target){
    for(int i=0; i<sz; i++){
        if(arr[i] == target){
            return i;     //found
        }
    }
    return -1;   // not found
}
int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;
    int target = 8;
    cout << linearSearch(arr,sz,target) << endl;
    return 0;
}