#include<bits/stdc++.h>
using namespace std;
void bucket_sort(vector<float>&arr,int n){
    vector<vector<float>>bucket(n);
    for(int i=0;i<n;i++){
        int idx=n*arr[i];
        bucket[idx].push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
        sort(bucket[i].begin(),bucket[i].end());
    }
    int index=0;
    for(int i=0;i<n;i++){
        for(float val:bucket[i])arr[index++]=val;
    }
}
int main(){
    vector<float>arr={0.78,0.17,0.39,0.26,0.72,0.94,0.21,0.12,0.23,0.68};
    bucket_sort(arr,arr.size());
    cout<<"Sorted array : ";
    for(float val:arr)cout<<val<<" ";
    return 0;
}
