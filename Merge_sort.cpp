#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&v,int st,int end,int mid){
    int i=st,j=mid+1;
    vector<int>temp;
    while(i<=mid&&j<=end){
        if(v[i]<=v[j]){
            temp.push_back(v[i]);
            i++;
        }
        else{
            temp.push_back(v[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(v[i]);
        i++;  
    }
    while(j<=end){
        temp.push_back(v[j]);
        j++;  
    }
    for(int idx=0;idx<temp.size();idx++){
        v[st+idx]=temp[idx];
    }
}
void mergesort(vector<int>&v,int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;
        mergesort(v,st,mid);
        mergesort(v,mid+1,end);
        merge(v,st,end,mid);
    }
}
void printarray(vector<int>&v,int n){
    for(int i=0;i<n;i++)cout<<v[i]<<" ";
}
int main(){
    vector<int>v={4,3,1,5,2};
    mergesort(v,0,v.size()-1);
    printarray(v,v.size());
    return 0;
}
