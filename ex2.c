//
// Created by Carlo Contardi on 23/09/2021.
//

#include<stdio.h>
int F(int *p, int x){

    while(x>1){
        *p=+2;
        x--;
    }
    return *p-x;
}
int main(){
    int a=3, b=5, c;
    c=a+F(&b, a);
    printf("A: %d ; B: %d; C: %d",a,b,c);
    return 0;
}
