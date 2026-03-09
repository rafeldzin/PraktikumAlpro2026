#include<stdio.h>

int main(){
    int n, m=0, l;
    scanf("%d", &n);
    l = n;
    while(l>0){
        m += (l%10);
        l/=10;
    }
    if(n%m==0){
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}