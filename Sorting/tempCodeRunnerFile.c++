int count = 1;

for(int i=0; i<n; i++){
    int mini = arr[i];
    int maxi = arr[i];
    for(int j = i; j<n; j++){
        if(i==j){
            continue;
        }
        mini = min(mini, arr[j]);
        maxi = max(maxi, arr[j]);
        if(maxi - mini <= k){
            count++;
        }
    }
}