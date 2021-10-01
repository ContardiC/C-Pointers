//
// Created by Carlo Contardi on 01/10/2021.
//

#include <stdio.h>
#include <stdlib.h>
char v[];  // vettore che conterrà la stringa da verificare

int palindroma(char *,int);  //  dichiarazione della funzione che riceve in ingresso l'indirizzo del vettore che contiene la stringa e la lunghezza della stringa

int  main ()
{

    int i=0,a;
    printf("Inserisci parola \n");
    scanf("%s",v);
    // carica la parola nel vettore. V contiene l'indirizzo iniziale del vettore.

    while(v[i]!='\0')
        i=i+1;

    // Calcola la lunghezza della stringa

    a=palindroma(v,i);  // Chiamata della funzione
    printf("%d",a);

    return 0;
}

int palindroma(char *p,int a) // Definizione della funzione
{
    char *q;
    q=p+a-1; // Q punta all'ultima posizione della stringa Infatti p=posizione iniziale + a=lunghezza della stringa -1 per non contare il carattere finale \0
    while(p<q)
        if(*p==*q)
        {
            p=p+1;
            q=q-1;
        }
        else
        {
            return 0;
        }
    return 1;
}
