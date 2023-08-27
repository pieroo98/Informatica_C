#include <stdio.h>
#include <stdlib.h>
#define N 10
float media ( int v[],int x);
int upperLimit (int v[], int x, float limit);
int main()
{
    int v1[N]={0},a=0,i,y,v2[N]={0};
    float m=0;
    printf("inserisci i valori del vettore : \n");
    for (i=0;i<N;i++)
    {
        printf("v1[%d] : ",i+1);
        scanf("%d",&v1[i]);
    }
    m= media(v1,10);
    printf("la media dei valori e' : %.1f\n",m);
    y=upperLimit(v1,N,m);
    printf(" in numero di elementi sopra la media sono : %d\n",y);
    printf("il numero di elementi superiori alla media sono : ");
    for (i=0;i<N;i++)
    {
        if (v1[i]>m)
        {
            v2[a]=v1[i];
            a++;
        }
    }
    for (i=0;i<a;i++)
    {
        printf("%d ",v2[i]);
    }
    return 0;
}
float media(int v1[], int x)
{
    int i;
    float m=0;
    for (i=0;i<N;i++)
    {
        m=m+v1[i];
    }
    m=m/N;
    return m;
}
int upperLimit (int v1[], int x, float m)
{
    int i,y=0;
    for (i=0;i<N;i++)
    {
        if (v1[i]>m)
        {
            y++;
        }
    }
    return y;
}
