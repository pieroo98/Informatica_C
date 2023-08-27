#include <stdio.h>
#include <stdlib.h>
#define N 900
#include <ctype.h>
#include <string.h>
int main()
{
    char c1[N]={'0'},c;
    int l,i=0,j;
    printf("inserisci un testo a piacere : ");
    while ((c=getchar())!=EOF)
    {
        c1[i]=c;
        i++;
    }
    l=strlen(c1);
    for (i=0;i<l;i++)
    {
        if (isalpha(c1[i]))
        {
            if ((c1[i]=='c') && (c1[i+1]=='h'))
            {
                c1[i]='k';
                for (j=i+1;j<l-1;j++)
                {
                    c1[j]=c1[j+1];
                }
            }
            if ((c1[i]=='c') && (c1[i+1]=='c') && (c1[i+2]=='h'))
            {
                c1[i]='k';
                c1[i+1]='k';
                for (j=i+2;j<l-2;j++)
                {
                    c1[j]=c1[j+1];
                }
            }
            if ((c1[i]==c1[i+1]) && (c1[i]!='k'))
            {
                for (j=i+1;j<l-1;j++)
                {
                    c1[j]=c1[j+1];
                }
            }
        }
    }
    printf("%s",c1);
    return 0;
}
