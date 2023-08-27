#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,n,x;
    float s,m;
    s=0;
    i=0;
    m=0;
    printf("definisci di quanti numeri calcolare somma e media: ");
    scanf("%d",&n);
    while (i<n)
    {
        printf("inserisci un numero :");
        scanf("%d",&x);
        i++;
        s=s+x;
        m=(float)(s/i);
    }
    printf("%.2f %.2f",s,m);
    return 0;
}
