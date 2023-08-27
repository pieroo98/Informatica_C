#include <stdio.h>
#include <stdlib.h>
#define n 5
#include <math.h>
int main()
{
    int i,v1[n],v2[n],v3[n];
    for (i=0;i<n;i++)
    {
        printf("inserisci i valori del primo vettore : ");
        scanf("%d",&v1[i]);
    }
    for (i=0;i<n;i++)
    {
        printf("inserisci i valori del secondo vettore : ");
        scanf("%d",&v2[i]);
    }
    for (i=0;i<n;i++)
    {
        v3[i]=(int)round(pow(v1[i], v2[i]));
    }
    for(i=0;i<n;i++)
    {
        printf("il valore del terzo vettore e' : %d \n",v3[i]);
    }
    return 0;
}
