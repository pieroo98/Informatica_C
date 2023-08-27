#include <stdio.h>
#include <stdlib.h>
#define N 6
int main()
{
    char c1[N]={'0'},c2[N]={'0'},c;
    int h1,m1,h2,m2,h;

    do
    {
        printf("inserisci il primo orario nel formato hh:mm : ");
        gets(c1);
        sscanf(c1,"%d%c%d",&h1,&c,&m1);
    }while ((h1<0 || h1>23) || (c!=':') || (m1<0 || m1>59));

    do
    {
        printf("\ninserisci il secondo orario nel formato hh:mm : ");
        gets(c2);
        sscanf(c2,"%d%c%d",&h2,&c,&m2);
    }while ((h2<0 || h2>23) || (c!=':') || (m2<0 || m2>59));

    //printf("\nil primo orario e' : %s\n",c1);
    //printf("il secondo orario e' : %s\n",c2);
    if (h1<h2)
    {
        h1=h1*60+m1;
        h2=h2*60+m2;
        h=h2-h1;
    }
    else
    {
        h1=h1*60+m1;
        h2=h2*60+m2;
        h=h1-h2;
    }
    printf("\n la differenza tra i due orai e' di %d minuti",h);
    return 0;
}
