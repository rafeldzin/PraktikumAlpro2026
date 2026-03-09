#include<stdio.h>

int main(){
    float v;
    int t;
    auto float s;
    scanf("%f %d", &v, &t);
    s = v*t;
    printf("%.2f\n", s);
    return 0;
}