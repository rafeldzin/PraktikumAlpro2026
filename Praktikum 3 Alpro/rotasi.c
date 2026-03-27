#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n], i;
    for(i=0; i<n; i++){
        scanf(" %d", &arr[i]);
    }
    int q;
    scanf("%d", &q);
    long int m=0;
    for(i=0; i<q; i++){
        char c;
        long int k;
        scanf(" %c %ld", &c, &k);
        if(c=='L'){
            m = m+(-1)*k;
        } else if(c=='R'){
            m = m+k;
        }
    }
    int index;
    for(i=0; i<n; i++){
        index = (i-m+n)%n;
        if(i==n-1){
            printf("%d\n", arr[index]);
        } else{
            printf("%d ", arr[index]);
        }
    }
    return 0;
}