#include <stdio.h>
#include <stdlib.h>
#define N 9999
#include <ctype.h>
int main()
{
    char c1[N];
    char c;
    int i,parola=0,conta=0;
    printf("inserisci dei caratteri :");
    while((c=getchar())!=EOF)
    {
        c1[conta]=c;
        conta++;
    }
    for(i=0;i<conta;i++)
        {
            if (isalpha(c1[i]))
            {
                if (parola==0){
                c1[i]=toupper(c1[i]);
                parola=1;}
            }
            else parola =0;
        }
        printf(" la nuova stringa e' : %s", c1);
    return 0;
}
