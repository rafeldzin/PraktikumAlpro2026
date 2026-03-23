#include<stdio.h>
#include<math.h>

int g(int x){
    int g = pow(x, 4) + 2*x + 1;
    return g;
}

void f(int g){
    int f = pow(g, 2) + 5*g + 7;
    printf("%d\n", f);
}

int main(){
    int x;
    scanf("%d", &x);
    f(g(x));
    return 0;
}