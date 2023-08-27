#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i=0,ndati;
    FILE *f;
    char c[20+1],n[15+1];
    char nome[100][20+1],cognome[100][20+1],via[100][30+1],civico[100][10+1],cf[100][16+1],tel[100][15+1];
    f=fopen("elenco.txt","r");
    if (f==NULL)
    {
        printf("errore apertura file.\n");
        return -1;
    }
    while (fscanf(f,"%s%s%s%s%s%s",&nome[i],&cognome[i],&via[i],&civico[i],&cf[i],&tel[i])!=EOF)
    {
        i++;
    }
    ndati=i;
    fprintf(stdout,"inserisci un cognome: ");
    fscanf(stdin,"s",c);
    printf("inserisci il numero: ");
    scanf("%s",n);
    for (i=0;i<ndati;i++)
    {
        if (strcmp(cognome[i],c[i])==0)
        {
            strcpy(tel[i],n);
        }
    }
    for (i=0;i<ndati;i++)
    {
        printf("%20s%20s%20s%20s%20s%20s\n",nome[i],cognome[i],via[i],civico[i],cf[i],tel[i]);
    }
    fclose(f);
    return 0;
}
