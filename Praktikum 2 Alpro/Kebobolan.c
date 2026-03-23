#include<stdio.h>

int main(){
    int n, ispanjang, isangka, iskapital, iskecil;
    ispanjang = 0;
    isangka = 0;
    iskapital = 0;
    iskecil = 0;
    scanf("%d", &n);
    if(n>=8){
        ispanjang = 1;
    }
    while(n--){
        char temp;
        scanf(" %c", &temp);
        if(temp - 'a' >= 0 && temp - 'a' <=25){
            iskecil = 1;
        } else if(temp - 'A' >= 0 && temp - 'A' <=25){
            iskapital = 1;
        } else if(temp - '0' >= 0 && temp - '0' <=9){
            isangka = 1;
        } 
    }
    if (ispanjang == 1 && iskecil == 1 && iskapital == 1 && isangka == 1){
        printf("KUAT\n");
    } else{
        printf("LEMAH\n");
    }
    return 0;
}