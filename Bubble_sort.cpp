#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>&arr,int n){
    for(int i=0;i<n-1;i++){
        bool iswap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                iswap=true;
            }
        }
        if(!iswap)return;
    }
}
void printarray(vector<int>&arr){
    for(auto it:arr)cout<<it<<" ";
}
int main(){
    vector<int>arr={4,1,2,5,3};
    bubblesort(arr,arr.size());
    printarray(arr);
    return 0;
}
