#include<stdio.h>

int main(){
    int n, count=1;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            if(j==i){
                printf("%d\n", count);
                count++;
            } else{
                printf("%d ", count);
                count++;
            }
        }
    }
    return 0;
}