#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,j,i,x;
    x=1;
    do
    {
        printf("inserisci un numero: ");
        scanf("%d",&n);
        for (i=1;i<=n;i++)
        {
            for (j=1;j<=i;j++)
            {
                printf("%2d ",i);
            }
            printf("\n");
        }
        printf("\n");
        for (i=1;i<=n;i++)
        {
            for (j=1;j<=i;j++)
            {
                printf("%2d ",j);
            }
            printf("\n");
        }
        printf("\n");
        for (i=1;i<=n;i++)
        {
            for (j=1;j<=i;j++)
            {
                printf("%2d ",x);
                x==n;
                x++;
            }
            printf("\n");
        }
    } while (n<=0);
    return 0;
}
