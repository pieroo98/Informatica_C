#include <stdio.h>
#include <stdlib.h>
#define n 8
int main()
{
    int i,tmp,v[n],j;
    i=0;
    printf("inserisci in valore nella posizione %d : ",i+1);
    scanf("%d",&v[i]);
    for (i=1;i<n;i++)
    {
        printf("inserisci in valore nella posizione %d : ",i+1);
        scanf("%d",&v[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i;j<n;j++)
        {
             if (v[i]>v[j])
            {
                tmp=v[i];
                v[i]=v[j];
                v[j]=tmp;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        printf("il valore nella posizione %d e' : %d\n",i+1,v[i]);
    }
    return 0;
}
