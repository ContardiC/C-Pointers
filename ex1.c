//
// Created by Carlo Contardi on 23/09/2021.
//
#include<stdio.h>
int F(int *p){
    *p=*p+4;
    return *p-2;
}
int main(){
    int a=3, b=5, c;
    c=a+F(&b);
    printf("A: %d ; B: %d; C: %d",a,b,c);
    return 0;
}
