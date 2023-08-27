#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, n, i;
    do
    {
        printf("inserisci un numero per visualizzare quanti numeri della serie vuoi vedere :");
        scanf("%d",&n);
        x=0;
        y=1;
        z=0;
        printf("%d\n%d\n",x,y);
        for(i=0;i<n;i++)
        {
            z=x+y;
            x=(z-1);
            y=z;
            printf("%d\n",z);
        }
    }
    while(n<0);
    return 0;
}
