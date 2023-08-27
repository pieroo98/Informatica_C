#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int x,y;
    do
    {
        printf("inserisci C per calcolare i gradi in celsius o F per fahrenheit :\n");
        scanf("%c",&c);
        if (c=='c')
        {
            printf("inserisci i gradi in celsius :\n");
            scanf("%d",&x);
            y=32;
            x=x+y;
            printf("i gradi in farhenheit sono : %d\n",x);
        }
        if (c=='f')
        {
            printf("inserisci i gradi in farhenheit :\n");
            scanf("%d",&x);
            y=-32;
            x=x+y;
            printf("i gradi in celsius sono : %d\n",x);
        }

    }while ((c!='c') && (c!='f'));

    return 0;
}
