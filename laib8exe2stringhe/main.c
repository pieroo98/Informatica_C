#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N 2000
int main()
{
    char c1[N+1]={'0'},c;
    int i,l,parole=0,flag=0,j=0;
    printf ("inserisci un vettore di caratteri : ");
    while ((c=getchar())!=EOF)
    {
        c1[j]=c;
        j++;
    }
    l=strlen(c1);
    for (i=0;i<l;i++)
    {
        if ((isalpha(c1[i])) && flag==0)
        {
            parole++;
            flag=1;
        }
        if ((ispunct(c1[i])) || (isspace(c1[i])))
        {
            flag=0;
            c1[i]='_';
        }
        if (isdigit(c1[i]))
        {
            flag=0;
            c1[i]='*';
        }
        if (islower(c1[i]))
        {
            c1[i]=toupper(c1[i]);
        }
    }
    printf("%s",c1);
    printf("\nil numero di parole e' : %d",parole);
    return 0;
}
