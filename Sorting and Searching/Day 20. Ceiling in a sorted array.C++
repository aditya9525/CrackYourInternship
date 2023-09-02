#include <bits/stdc++.h>
using namespace std;
int ceilSearch(vector<int>&arr, int x){
    int s=0; 
    int e=arr.size()-1;
    if(x<arr[s]){
        return s;
    }
    for(int i=0; i<e; i++){
        if(arr[i]<x && arr[i+1]>=x){
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int>arr;
    for(int i=0; i<n; i++){
        int ind;
        cin>> ind;
        arr.push_back(ind);
    }
    int x=3;
    int index=ceilSearch(arr, x);
    if(index == -1)
        cout << "Ceiling of " << x << " doesn't exist in array ";
    else
        cout << "ceiling of " << x << " is " << arr[index];
    return 0;
}
