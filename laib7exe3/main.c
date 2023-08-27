#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char c;
    int chars=0, alpha=0, upper=0, digit=0, space=0, flag =0, parola=0;
    while ((c=getchar())!='\n')
    {
        chars++;
        if (isalpha(c))
        {
            alpha++;
        }
        if (isupper(c))
        {
            upper++;
        }
        if (isdigit(c))
        {
            digit++;
        }
        if (isspace(c))
        {
            space++;
            flag=0;
        }
        if ((isalpha(c)) && flag==0 )
        {
            parola++;
        }
    }
    printf("la frase inserita contiene :\n");
    printf("caratteri : %d\n",chars);
    printf("lettere : %d\n",alpha);
    printf("maiuscole : %d\n",upper);
    printf("numeri : %d\n",digit);
    printf("spazi : %d\n",space);
    printf("parole : %d\n",parola);
    return 0;
}
