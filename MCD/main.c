#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b,r;
    printf("inserisci due valori : ");
    scanf("%d %d",&a,&b);
    while (a%b != 0)
    {
        if (a>b)
        {
            (r=a%b);
            a=b;
            b=r;
        }
        else
        {
            a = (a+b);
            b= (a-b);
            a= (a-b);
            (r=a%b);
            a=b;
            b=r;
        }
    }
    printf("l'MCD e' : %d\n",b);
    return 0;
}
