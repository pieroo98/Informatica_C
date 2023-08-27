#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int flag=0;
    char c1,c2;
    printf("inserire il primo carattere : ");
    scanf("%c",&c1);
    getchar();
    printf("inserisci il secondo carattere : ");
    scanf("%c",&c2);
    if (isalpha(c1))
    {
        flag =1;
    }
    if (isalpha(c2) && flag==1)
    {
        if (c1>c2)
        {
            printf("%c %c\n",c1,c2);
        }
        else
        {
            printf("%c %c\n",c2,c1);
        }
    }
    else
    {
        if (isalnum(c1) || isalnum(c2))
        {
            printf("uno dei due caratteri contiene un numero\n");
        }
    }
    return 0;
}
