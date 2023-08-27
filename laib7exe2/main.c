#include <stdio.h>
#include <stdlib.h>
#define n 6
void mult(int v[], int z, int x);
int main()
{
    int v1[n],x,i;
    for (i=0;i<n;i++)
    {
        printf("inserisci il valore nella posizione %d : ",i+1);
        scanf("%d",&v1[i]);
    }
    printf("inserisci un valore : ");
    scanf("%d",&x);
    mult(v1,n,x);
    for (i=0;i<n;i++)
    {
        printf("il nuovo vettore ha il seguente elemento %d in posizione %d \n",v1[i],i+1);
    }
    return 0;
}
void mult(int v[], int z, int x)
{
    int i;
    for(i=0;i<z;i++)
    {
        v[i]=v[i]*x;
    }
    return;
}
