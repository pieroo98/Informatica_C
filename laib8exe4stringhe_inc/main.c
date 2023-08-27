#include <stdio.h>
#include <stdlib.h>
#define N 60
#include <ctype.h>
int main()
{
    char c1[N+1]={'0'};
    int i=0, parole=0, lettere=0,lettere1=0, flag=0,v[N],flag2=0,k=0,u;
    float media=0;
    gets(c1);
    while (c1[i]!='\0')
    {
        if ((isalpha(c1[i])) && flag ==0)
        {
            parole++;
            flag=1;
        }
        if ((isspace(c1[i])) || (ispunct(c1[i])))
        {
            flag=0;
            flag2=1;
        }
        if (isalpha(c1[i]))
        {
            lettere++;
            flag2=0;
            lettere1++;
        }
        if (flag2==1)
        {
            v[k]=lettere1;
            k++;
            u=k;
        }
        if (flag2==1) lettere1=0;
        i++;
    }
    media=(float)lettere/parole;
    printf("la media delle parole e' : %.2f\n", media);
    printf("il numero di parole e' : %d\n",parole);
    printf("il numero di lettere e' : %d\n",lettere);
    printf("ha iterato %d volte\n",i);
    printf("la stringa contiene : ");
    for (k=0;k<u;k++)
    {
        printf("%d parola composta da %d lettere\n",k+1,v[k]);
    }
    return 0;
}
