bool findPair(int arr[], int size, int n){
    sort(arr, arr+size);
    int s=0;
    int e=1;
    while(s<=e && e<=size-1){
        if(arr[e]-arr[s]==n && s!=e){
            return 1;
        }
        else if(arr[e]-arr[s]>n){
            s++;
        }
        else{
            e++;
        }
    }
    return 0;
}
