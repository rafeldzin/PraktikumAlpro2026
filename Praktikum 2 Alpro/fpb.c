#include<stdio.h>

int main(){
    int n, min=1001;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        int temp;
        scanf("%d", &temp);
        a[i] = temp;
        if(min>a[i]){
            min = a[i];
        }
    }
    int x=1;
    for(int i=1; i<=min; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(a[j]%i==0){
                count++;
            }
        }
        if(count == n){
            x = i;
        }
    }
    int count=0;
    for(int i=0; i<n; i++){
        a[i] /= x;
        count +=a[i];
    }
    printf("%d\n", count);
    return 0;
}