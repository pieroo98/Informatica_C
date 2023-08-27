#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n,i,x,y;
    x=1;
    do
    {
        printf("inserisci un numero per calcolare il fattoriale: ");
        scanf("%f",&n);
        y=1;
        printf("0! = 1\n");
        for (i=0;i<n;i++)
        {
            x=x*y;
            y++;
            printf("%.0f! = %.0f\n",i+1,x);
        }
    }
    while ( n<0 );
    return 0;
}
