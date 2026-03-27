#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int j;
    long int ans=0;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]<arr[j]){
                ans+=arr[i];
            } else {
                ans+=arr[j];
            }
        }
    }
    printf("%ld\n", ans);
    return 0;
}