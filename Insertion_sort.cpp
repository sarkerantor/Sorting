#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int>&v,int n){
    for(int i=1;i<n;i++){
        int cur=v[i];
        int prev=i-1;
        while(prev>=0&&v[prev]>cur){
            v[prev+1]=v[prev];
            prev--;
        }
        v[prev+1]=cur;
    }
}
void printarray(vector<int>&v){
    cout<<"Sorted array : ";
    for(auto it:v)cout<<it<<" ";
}
int main(){
    vector<int>v={2,1,5,3,4};
    insertion_sort(v,v.size());
    printarray(v);
    return 0;
}
