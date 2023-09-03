#include <bits/stdc++.h>
using namespace std;
bool checkReverse(int arr[], int n){
    int x=-1; 
    int y=-1;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            if(x==-1){
                x=i;
            }
            y=i+1;
        }
    }
    if(x!=-1){
        reverse(arr+x, arr+y+1);
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                return false;
                
            }
        }
    }
    return true;
}

int main()
{
    int arr[] = { 1, 2, 4, 5, 3 };
    int n=5;
    int ans=checkReverse(arr, n);
    if(ans){
        cout << true << endl;
    }
    else{
        cout << false << endl;
    }

    return 0;
}
