#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int>&arr,int n){
    for(int i=0;i<n-1;i++){
        int idx=i;
        for(int j=idx+1;j<n;j++){
            if(arr[j]<arr[idx])idx=j;
        }
        swap(arr[idx],arr[i]);
    }
}
int main(){
    vector<int>arr={2,3,2,4,7,6,1};
    selection_sort(arr,arr.size());
    cout<<"Sorted array : ";
    for(int val:arr)cout<<val<<" ";
    return 0;
}
