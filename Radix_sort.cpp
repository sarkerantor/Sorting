#include<bits/stdc++.h>
using namespace std;
void countsort(vector<int>&arr,int pos){
    int n=arr.size();
    vector<int>ans(n);
    int count[10]={0};
    for(int val:arr){
        int dig=(val/pos)%10;
        count[dig]++;
    }
    for(int i=1;i<10;i++)count[i]+=count[i-1];
    for(int i=n-1;i>=0;i--){
        int dig=(arr[i]/pos)%10;
        ans[count[dig]-1]=arr[i];
        count[dig]--;
    }
    arr=ans;
}
void radixsort(vector<int>&arr){
    int mx=*max_element(arr.begin(),arr.end());
    for(int pos=1;mx/pos>0;pos*=10){
        countsort(arr,pos);
    }
}
int main(){
    vector<int>arr={2,3,2,4,7,6,1};
    radixsort(arr);
    cout<<"Sorted array : ";
    for(int val:arr)cout<<val<<" ";
    return 0;
}
