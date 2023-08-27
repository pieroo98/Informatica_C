#include <stdio.h>
#include <stdlib.h>
#define n 10
int main()
{
    int i,j,v[n]={0},flag,decrescente,monotona;
    flag=0;
    decrescente=1;
    monotona=0;
    i=0;
    printf("inserisci un numero %d : ",i+1);
    scanf("%d",&v[i]);
    i++;
    while (i<n && monotona==0)
    {
        printf("inserisci un numero %d : ",i+1);
        scanf("%d",&v[i]);
        if (v[i]>(v[i-1])) {
            decrescente =0;
        }
        else if (v[i]<=(v[i-1]))
        {
            flag=1;
        }
        i++;
        if (flag+decrescente==0) monotona=0;
        else if (flag+decrescente==1) monotona=1;
        else if (flag+decrescente==2) monotona=0;
    }
    printf("i valori sono: ");
    for (j=0;j<i-1;j++)
    {
        printf("%d ",v[j]);
    }
    return 0;
}
