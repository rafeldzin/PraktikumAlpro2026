#include<stdio.h>

int main(){
    int n = 3;
    float r, ans;
    while(n--){
        scanf("%f", &r);
        ans += r;
    }
    printf("%f\n", ans);
    return 0;
}