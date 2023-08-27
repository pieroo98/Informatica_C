#include <stdio.h>
#include <stdlib.h>
#define n 10
int main()
{
    int v[n]={0},i,max,j,flag=0,b=0,c[n]={0},y=0;
    max=v[0];
    for (i=0;i<n;i++)
    {
        printf("inserisci il valore nella posizione %d : ",i+1);
        scanf("%d",&v[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("i valori del vettore sono %d nella posizione %d \n",v[i],i+1);
    }
    printf("\n");
    for (i=0; i<n && flag==0;i++)
    {
        for(j=i;j<n && flag==0;j++){
        if (v[i]==v[j] && v[i]>max)
        {
            max=v[i];
        }
    }
    }
    for (i=0;i<n;i++)
    {
        if (v[i]==max)
        {
            c[y]=i+1;
            b++;
            y++;
        }
    }
    printf("il massimo e' %d ed e' ripetuto %d volte nelle posizioni ",max,b);
    for (i=0;i<y;i++)
        printf("%d ",c[i]);
    return 0;
}
