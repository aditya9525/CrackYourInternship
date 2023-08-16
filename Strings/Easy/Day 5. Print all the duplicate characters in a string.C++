#include <bits/stdc++.h>
using namespace std;
void printDuplictes(string str){
    vector<int>ans;
    int n=str.length();
    sort(str.begin(), str.end());
    for(int i=0; i<n; i++){
        int cnt=1;
        while(i<n-1 && str[i]==str[i+1]){
            cnt++;
            i++;
        }
        cout << str[i] << " count" << cnt<<endl;
    }
}

int main()
{
    string str = "hello ji kaise ho kare";
    printDuplictes(str);
    return 0;
}
