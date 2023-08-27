#include <stdio.h>
#include <stdlib.h>
#define N 8
int main()
{
    int i,v[N]={0},j,c[N]={0},y=0,b=0,k,a,d,m=0;
    for (i=0;i<N;i++)
    {
        printf("inserisci i valori del vettore in posizione %d : ",i+1);
        scanf("%d",&v[i]);
    }
    for (i=0;i<N;i++)
    {
        printf("v[%d] = %d\n",i+1,v[i]);
    }
    for (i=0;i<N;i++)
    {
        for (j=1;j<N && j!=i;j++)
        {
            if (v[i]==v[j])
            {
                c[y]=v[j];
                m++;
                y++;
            }
        }
    }
    for (y=0;y<m;y++)
    {
        printf("il nuovo vettore composto solo di valori ripetuti e' : %d\n",c[y]);
        b++;
    }
    a=1;
    d=0;
    for (y=0;y<1;y++)
    {
        for (k=1;k<b && k!=y;k++)
        {
            if (c[y]==c[k])
            {
                a++;
            }
            else d++;
        }
    }
    printf("i valori replicati di %d sono %d\n",c[0],a);
    printf("i valori replicati del secondo numero sono %d ",d);
    return 0;
}
