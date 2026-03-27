#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n], i;
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=n-1; i>=0; i--){
        if(i==0){
            printf("%d\n", arr[i]);
        } else {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}