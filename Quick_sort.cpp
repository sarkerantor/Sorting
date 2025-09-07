#include<bits/stdc++.h>
using namespace std;
int position(vector<int>&v,int st,int end){
    int idx=st-1;
    for(int i=st;i<end;i++){
        if(v[i]<=v[end]){
            idx++;
            swap(v[idx],v[i]);
        }
    }
    idx++;
    swap(v[idx],v[end]);
    return idx;
}
void quick_sort(vector<int>&v,int st,int end){
    if(st<end){
        int pivot=position(v,st,end);
        quick_sort(v,st,pivot-1);
        quick_sort(v,pivot+1,end);
    }
}
int main(){
    vector<int>v={3,2,1,47,5,4};
    quick_sort(v,0,v.size()-1);
    for(int val:v)cout<<val<<" ";
    cout<<endl;
    return 0;
}
