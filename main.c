#include <stdio.h>

int main() {
    int a=3;
    int *p;
    p=&a;

    printf("Valore di a: %d \n",a);
    printf("Valore di p: %d \n",p);
    printf("Valore puntato da p: %d \n",*p);
    printf("Valore indirizzo di a: %d \n",&a);
    return 0;
}
