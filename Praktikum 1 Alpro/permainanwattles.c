#include<stdio.h>

int main(){
    int d, m, dpr, mbl;
    scanf("%d %d", &d, &m);
    while(d>=0 || m>=0){
        dpr = d;
        mbl = m;
        int a=0, b=0;
        if(mbl<10){
            a = 2*mbl;
        } else {
            while(mbl>0){
                a = mbl%10;
                mbl/=10;
            }
            a += m%10;
        }
        if(dpr<10){
            b = 2*dpr;
        } else {
            while(dpr>0){
                b = dpr%10;
                dpr/=10;
            }
            b += d%10;
        }
        m -= b;
        d -= a;
        if (m == d || d<0 || m<0){
            break;
        }
    }
    if((d<0) && (m<0)){
        printf("Wattles\n");
    } else if(d<0){
        printf("Mebel\n");
    } else if (m<0){
        printf("Deeper\n");
    } else{
        printf("Wattles\n");
    }
    return 0;
}