#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10],c[10],n,x,z,i,j,y;
    n=0;
    x=0;
    z=0;
    while (n!=10 && x!=10)
    {
        printf("inserisci un valore %d: ",z);
        scanf("%d",&y);
        z++;
        if ((y>0) || (y<0 && y%3==0))
        {
            v[n]=y;
            n++;
        }
        else if ((y<0) || ((y%3!=0) && (y%2!=0)))
        {
            c[x]=y;
            x++;
        }
    }
        for (i=0;i<n;i++)
        {
            printf("i valori del primo vettore sono %d : %d\n",i,v[i]);
        }
        for (j=0;j<x;j++)
        {
            printf("i valori del secondo vettore sono %d : %d\n",j,c[i]);
        }
    return 0;
}
