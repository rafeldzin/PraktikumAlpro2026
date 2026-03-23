#include<stdio.h>

int count=0;

int isprime(int x){
    if(x==1){
        return 0;
    }
    for(int i=2; i*i<=x; i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}

int isdigitprime(int x){
    int digit; 
    while(x>0){
        digit = x%10;
        if(!isprime(digit)){
            return 0;
        }
        x/=10;
        count += digit;
    }
    return 1;
}

int main(){
    int x;
    scanf("%d", &x);
    if(isprime(x) && isdigitprime(x) && isprime(count)){
        printf("1\n");
    } else{
        printf("0\n");
    }
    return 0;
}