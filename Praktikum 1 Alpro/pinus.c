#include<stdio.h>

int main(){
    int n, k, l;
    scanf("%d", &n);
    l = 2*n - 1;
    k = n;
    while(n!=1){
        k += n;
        n--;
    }
    n = (l+1)/2;
    int m = (l/2) +1;
    int count=1;
    while(n!=1){
        int a = n;
        int b = count;
        for(int i=0; i<n; i++){
            for(int j=0;j<a-1; j++){
                printf(" ");
            }
            for(int j=0;j<b; j++){
                printf("*");
            }
            b+=2;
            printf("\n");
            a--;
        }
        count+=2;
        n--;
    }
    n = (l+1)/2;
    for(int i=0; i<n; i++){
        for(int j=0;j<m-2; j++){
            printf(" ");
        }
        for(int j=0;j<3; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}