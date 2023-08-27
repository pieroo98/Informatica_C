#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 15
#define N 10
int insert_product(char warehouse[][M], float price[], int n, char new_product[],  float price_new_product)
{ int i,val=-1,trovato=0,pos=-1;
    for(i=0;i<n && val!=0;i++)
    {
        if(strcmp(warehouse[i],new_product)==0)
        {
            val=0;
        }
    }
    for(i=0;i<n && trovato==0;i++)
    {
        if (price[i]==-2)
        {
            trovato=1;
            pos=i;

        }
        else
            val=2;
    }
    if (trovato==1)
    {
        price[pos]=price_new_product;
        strcpy(warehouse[pos],new_product);
        val=1;
    }
 return val;

}
void print_all(char warehouse[][M], float price[], int n, float *avg, float *max)
{
    int i;
    for(i=0;i<n && price[i]!=-2;i++)
    {
        printf("%s %f\n",warehouse[i],price[i]);
    }
    printf("il prezzo medio e': %.2f\n",*avg);
    printf("il prezzo massimo e': %.2f\n",*max);
}
int main()
{
    char nomi[N][M],new_product[M];
    float prezzo[N];
    int i,verifica=-1,codice=-1,n_elementi=0;
    float price_new_product,*max,*avg,somma=0;
    for (i=0;i<N;i++)
    {
        prezzo[i]=-2;
    }

    do
    {   printf("digita '1' per stampare il listino\ndigita '2' per inserire un nuovo elemento\ndigita '0' per terminare il programma\n");
        scanf("%d",&codice);
        if (codice==2)
        {
            printf("inserisci un nuovo alimento: ");
            scanf("%s",new_product);
            printf("inserisci il prezzo: ");
            scanf("%f",&price_new_product);
            verifica = insert_product(nomi,prezzo,N,new_product,price_new_product);
            switch(verifica)
            {
            case 0:
                printf("prodotto già inserito in precedenza.\n");
                break;
            case 1:
                printf("prodotto inserito con successo.\n");
                break;
            case 2:
                printf("il listino è pieno.\n");
                break;
                default: printf("ERRORE\n");
            }
        }
        else if(codice==1)
        { max=&prezzo[0];
        for(i=0;i<N && prezzo[i]!=-2;i++)
        {
            somma=somma+prezzo[i];
            n_elementi++;
            if(prezzo[i]>*max)
            {
                max=&prezzo[i];
            }
        }
        *avg=somma/n_elementi;
        print_all(nomi,prezzo,N,avg,max);

        }
    }while (codice!=0);
    return 0;
}
