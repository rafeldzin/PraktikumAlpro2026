#include<stdio.h>

int main(){
    int n, x, ada=0;
    scanf("%d %d", &n, &x);
    int arr[n], i;
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(x==arr[i]){
            ada = 1;
        }
    }
    if(ada==1){
        printf("%d ", x);
        for(i=0; i<n; i++){
            if(i==n-1){
                printf("%d\n", arr[i]);
            } else{
                printf("%d ", arr[i]);
            }
        }
    } else{
        for(i=0; i<n; i++){
            if(i==n-1){
                printf("%d\n", arr[i]);
            } else{
                printf("%d ", arr[i]);
            }
        }
    }
    return 0;
}