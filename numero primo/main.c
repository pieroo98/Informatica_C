#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, r;
    i= 2;
    printf("inserisci un numero :");
    scanf("%d",&n);
    while ((r!=0) && ( i<n))
    {
        r=n%i;
        i++;
    }
    if ((r != 0) && (n == i ))
        {
            printf ("%d e' un numero primo\n",n);
        }
    else
    {
        printf("%d non e' primo", n);
    }
    return 0;
}
