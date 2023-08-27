#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,i,a,j;
    printf("inserisci un numero: ");
    scanf("%d %d",&l,&a);
    for (i=0;i<l;i++)
    {
        printf("\n");
        for(j=0;j<a;j++){
        printf("*");}
    }

    return 0;
}
