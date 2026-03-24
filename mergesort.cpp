#include<bits/stdc++.h>
using namespace std;
//merge sort's time complexity is O(n)
void merge(vector<int>&arr, int st, int mid , int end){
    int i = st;
    int j = mid+1;
    vector<int>temp ;
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=0 ; k< temp.size();k++){
        arr[st+k] = temp[k];
    }
    return;
}

void mergesort(vector<int> &arr , int st, int end){
    int mid = st + (end-st)/2;
    if( st>=end) return;
    mergesort(arr,st,mid);
    mergesort(arr,mid+1,end);
    merge(arr,st,mid,end);
}

