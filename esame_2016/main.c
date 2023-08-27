#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct fp{int ora; int min; int ora1; int min1; float prezzo;};
int main(int argc, char * argv[])
{
    FILE *fp,*fi;
    int i=0,h,m,h1,m1,min_sosta=0,cont=0,flag=0,flag1=0,exit=0;
    float sosta=0;
    char targa[8];
    struct fp price[4];
    fp=fopen("prezzi.txt","r");
    if (fp == NULL)
    {
        printf("errore apertura file.\n");
        return -1;
    }
    fi = fopen(argv[1],"r");
    if (fi==NULL)
    {
        printf("errore apertura secondo file.\n");
        return -2;
    }
    if (argc!=3)
    {
        printf("errore argomenti.\n");
        return -3;
    }
    while ((fscanf(fp,"%d:%d %d:%d %f",&price[i].ora,&price[i].min,&price[i].ora1,&price[i].min1,&price[i].prezzo))!=EOF)
    {
        i++;
    }
    while (fscanf(fi,"%s %d:%d %d:%d",targa,&h,&m,&h1,&m1)!=EOF)
    {
        if ((strcmp(targa,argv[2]))==0)
        {
            if ((h1==99) && (m1==99))
            {
                exit=1;
            }

            else if ((h1!=99) && (m1!=99))
            {
                flag1=2;
                for (i=0;i<4;i++)
                {
                    price[i].ora = price[i].ora*60;
                    price[i].min= price[i].min + price[i].ora;
                    price[i].ora1 = price[i].ora1*60;
                    price[i].min1= price[i].min1 + price[i].ora1;
                    h=h*60;
                    m=m+h;
                    if (m>price[i].min && m<price[i].min1)
                    {
                        h1=h1*60;
                        m1=m1+h1;
                        min_sosta= m1-m;
                        sosta= min_sosta*price[i].prezzo/60;
                    }
                }

            }
            cont++;
        }
        else if ((strcmp(targa,argv[2]))!=0)
        {
            flag=1;
        }
    }
    if ((flag==1) && (cont==0))
    {
        printf("il veicolo non e' mai entrato nel parcheggio.\n");
    }
    if ((exit==1) && (cont==1)) printf("il veicolo %s non e' mai uscito.\n",targa);
    if ((flag1==2) && (exit==0))printf("il veicolo e' uscito dal parcheggio.\n");
    if (((flag1==2) && (cont>1)) && (exit==1)) printf("il veicolo %s e' entrato %d volte, ma e' uscito %d volte,\nl' ultima volta e' rimasto nel parcheggio.\n",argv[2],cont,cont-1);
    if ((flag1==2) && (exit==0)) printf("il veicolo %s e' entrato %d volte.\n",argv[2],cont);
    printf("prezzo pagato: %.2f euro.\n",sosta);
    return 0;
}
