#include <stdio.h>
#include <stdlib.h>
#define N 60
#include <string.h>
int main()
{
    char c1[N],nome1[N],nome2[N],nome3[N],nome4[N];
    int prezzo1=0,prezzo2=0,prezzo3=0,quantita=0,flag=0;
    gets(c1);
    sscanf(c1,"%s %d",nome1,&prezzo1);
    gets(c1);
    sscanf(c1,"%s %d",nome2,&prezzo2);
    gets(c1);
    sscanf(c1,"%s %d",nome3,&prezzo3);
    gets(c1);
    sscanf(c1,"%s %d",nome4,&quantita);
    do
    {
        if (strcmp(nome1,nome4)==0)
        {
            printf("il costo totale del prodotto %s e' %d\n",nome4,quantita*prezzo1);
            flag=1;
        }
        if (strcmp(nome2,nome4)==0)
        {
            printf("il costo totale del prodotto %s e' %d\n",nome4,quantita*prezzo2);
            flag=1;
        }
        if (strcmp(nome3,nome4)==0)
        {
            printf("il costo totale del prodotto %s e' %d\n",nome4,quantita*prezzo3);
            flag=1;
        }
    }while (flag==0);
    return 0;
}
