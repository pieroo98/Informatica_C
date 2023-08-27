#include <stdio.h>
#include <stdlib.h>
#define N 15
#include <string.h>
int main()
{
    FILE *f1;
    int i=0,j,a=0,b=0;
    char f[N],nome[N][N],ora[N][N],nome1[N][N],ora1[N][N];
    f1 = fopen("testo.txt","r");
    if (f1==NULL)
    {
        printf("errore testo.txt\n");
        return 1;
    }
    while ((fscanf(f1,"%s %s %s %s",nome[i],ora[i],nome1[i],ora1[i]))!=EOF)
    {
        i++;
    }
        j=i;
        printf("inserisci una citta :");
        gets(f);
    for (i=0;i<j;i++)
    {
        if ((strcmp(f,nome[i]))==0)
        {
            a++;
        }
        if ((strcmp(f,nome1[i]))==0)
        {
            b++;
        }
    }
    printf("i treni che partono sono %d e quelli di arrivo sono %d",a,b);
    fclose(f1);
    return 0;
}
