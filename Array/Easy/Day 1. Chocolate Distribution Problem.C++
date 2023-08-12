#include <bits/stdc++.h>
using namespace std;

int findMinDiff(vector<int>&arr, int m){
    int n=arr.size();
    int min_dif=INT_MAX;
    sort(arr.begin(), arr.end());
    for(int i=0; i+m-1<n; i++){
        if(arr[i+m-1]-arr[i]<min_dif){
            min_dif=arr[i+m-1]-arr[i];
        }
    }
    return min_dif;
}

int main()
{
    vector<int>arr;
    int val;
    for(int i=0; i<7; i++){
        cin >> val;
        arr.push_back(val);
    }
    int m;
    cin >> m;
    
    cout << findMinDiff(arr, m) << endl;
    return 0;
}
