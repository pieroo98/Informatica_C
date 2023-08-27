#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n,m,s;
    int x,i;
    printf("inserisci un numero reale: ");
    scanf("%f",&n);
    for (i=1;i<10;i++) {
        do{

        printf("inserisci un numero %d: ",i);
        scanf("%d",&x);
        s=0;
        s=s+x;

    } while (x<n*9);
    }
    m=(s/i);
    printf("la media e': %.2f",m);
    return 0;
}
