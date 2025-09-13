#include<bits/stdc++.h>
using namespace std;
void countsort(vector<int>&arr){
    int mx=*max_element(arr.begin(),arr.end());
    int n=arr.size();
    vector<int>v(mx+1,0),ans(n);
    for(int val:arr)v[val]++;
    for(int i=1;i<=mx;i++)v[i]+=v[i-1];
    for(int i=0;i<n;i++){
        ans[v[arr[i]]-1]=arr[i];
        v[arr[i]]--;
    }
    arr=ans;
}
int main(){
    vector<int>arr={2,3,2,4,7,6,1};
    countsort(arr);
    cout<<"Sorted array : ";
    for(int val:arr)cout<<val<<" ";
    return 0;
}
