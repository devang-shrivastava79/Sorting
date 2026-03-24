#include<bits/stdc++.h>
using namespace std;
void selectionsort(vector<int>& a){
    int n = a.size();
    for(int i = 0;i<n-1; i++){
        int g =i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[g]) g = j;
        }
        swap(a[i], a[g]);
    }
}