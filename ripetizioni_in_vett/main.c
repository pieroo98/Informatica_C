#include <stdio.h>
#include <stdlib.h>
#define N 8
int main()
{
    int i,j,v[N]={0},v2[N]={0};
    printf("inserisci i valori del vettore : \n");
    for (i=0;i<N;i++)
    {
        printf("v[%d] : ",i+1);
        scanf("%d",&v[i]);
    }

    for (i=0;i<N&& v2[i]!=-1;i++)
    {
        for (j=0;j<N ;j++)
        {
            if (v[i]==v[j] )
            {
                v2[i]++;
                if(j!=i)
                    v2[j]=-1;
            }
        }
    }
    for (i=0;i<N;i++)
    {
        if(v2[i]!=-1)
        printf("il valore %d e' ripetuto %d volte\n",v[i],v2[i]);
    }
    return 0;
}
