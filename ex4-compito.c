//
// Created by Carlo Contardi on 24/09/2021.
//
/*
#include<stdio.h>
int F(int *p){
    *p=*p+4;
    while(*p<10){
        if(*p % 2 == 0){
            *p++;
        }else{
            *p+=2;
        }
    }
    return *p-2;
}
int G(int x, int *p){
    int i;
    *p+=x;
    for(i=-4;i<=x;i++){
        *p=*p-i;
    }
    return i;
}
int main(){
    int a=3, b=5, c;
    c=a+G(F(&b),&a);
    printf("A: %d ; B: %d; C: %d",a,b,c);
    return 0;
}
*/