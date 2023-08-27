#include <stdio.h>
#include <stdlib.h>
#define n 6
int main()
{
    int i,j,flag=0,tmp;
    int v[n]={0}, c[n]={0};
    for (i=0;i<n;i++)
    {
        printf("inserisci i valori del primo vettore %d: ",i+1);
        scanf("%d",&v[i]);
    }
    printf("\n");
    for (j=0;j<n;j++)
    {
        printf("inserisci i valori del secondo vettore %d: ",j+1);
        scanf("%d",&c[j]);
    }
    printf("\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (v[i]==c[j])
            {
                tmp=v[i];
                v[i]=c[j];
                c[j]=tmp;
            }
        }
    }
for (i=0; i<n && flag==0; i++)
    if ( v[i]!=c[i] ) flag=1;
    if ( flag==0 ) printf("stessi elementi\n");
    else printf("diversi\n");
    return 0;
}
