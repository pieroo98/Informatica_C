#include <stdio.h>
#include <stdlib.h>
int power(int b, int e);
int main()
{
    int a,b,c=0;
    printf("inserisci la base : ");
    scanf("%d",&a);
    printf("inserisci l'esponente : ");
    scanf("%d",&b);
    c=power(a,b);
    printf("la potenza e' : %d\n",c);
    return 0;
}
int power(int a,int b)
{
    int c=1,i;
    for (i=0;i<b;i++)
    {
        c=c*a;
    }
    return c;
}
