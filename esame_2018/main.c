#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    FILE *fp,*fi;
    int i=0,anno,cont=0,flag=1,rang=0,ingresso=0,x=0,z=0;
    int g,mese,a,h,m,s,h1,m1,s1,g1,mese1,a1,flag1=0,j;
    char tessera[6];
    float v[3],prezzo=0,diff=0;
    if (argc>13)
    {
        printf("errore argomenti.\n");
        return -3;
    }
    fp = fopen("visite.txt","r");
    if (fp == NULL)
    {
        printf("errore apertura primo file.\n");
        return -1;
    }
    fi= fopen("prezzi.txt","r");
    if (fi == NULL)
    {
        printf("errore apertura secondo file.\n");
        return -2;
    }
    for (j=0;j<argc;j++)
    {
        z++;
    }
    while ((fscanf(fi,"%f",&v[i]))!=EOF)
    {
        i++;
    }
    fclose(fi);
    anno=atoi(argv[1]);
    while ((fscanf(fp,"%s %d/%d/%d %d:%d:%d %d:%d:%d %d/%d/%d",tessera,&g,&mese,&a,&h,&m,&s,&h1,&m1,&s1,&g1,&mese1,&a1))!=EOF)
    {

        if ((strcmp(argv[2],"S"))==0)
        {
            if (anno == a)
            {
                flag=0;
                a=a*365;
                mese=mese*30;
                g=g + m + a;
                a1=a1*365;
                mese1=mese1*30;
                g1=g1 + m1 + a1;
                rang=g - g1;
                rang= rang/365;
                if (rang<= 10)
                {
                    prezzo = prezzo + v[0];
                }
                else if (rang>10 && rang < 18)
                {
                    prezzo= prezzo +v[1];
                }
                else if (rang>=18)
                {
                    prezzo = prezzo + v[2];
                }
                h=h*3600;
                m=m*60;
                s=s+m+h;
                h1=h1*3600;
                m1=m1*60;
                s1=s1+m1+h1;
                diff= diff + (s1-s)/60;
                cont++;
            }
        }
        else if ((strcmp(argv[2],"G"))==0)
        {
            if (anno == a)
            {
                    if ((strcmp(argv[3],tessera))==0)
                    {
                        if (flag1==0)
                        {
                            a=a*365;
                            mese=mese*30;
                            g=g + m + a;
                            ingresso=g;
                        }
                        if (flag1==1)
                        {
                            a=a*365;
                            mese=mese*30;
                            g=g + m + a;
                            ingresso = g- ingresso;
                            flag1 = 0;
                            if (ingresso> 0 && ingresso <2)
                            {
                                x++;
                            }
                        }
                        flag1=1;
                    }
                    flag1=0;
                    if ((strcmp(argv[4],tessera))==0)
                    {
                        if (flag1==0)
                        {
                            a=a*365;
                            mese=mese*30;
                            g=g + m + a;
                            ingresso=g;
                        }
                        if (flag1==1)
                        {
                            a=a*365;
                            mese=mese*30;
                            g=g + m + a;
                            ingresso = g- ingresso;
                            flag1 = 0;
                            if (ingresso> 0 && ingresso <2)
                            {
                                x++;
                            }
                        }
                        flag1=1;
                    }
                    flag1=0;
                    if ((strcmp(argv[5],tessera))==0)
                    {
                        if (flag1==0)
                        {
                            a=a*365;
                            mese=mese*30;
                            g=g + m + a;
                            ingresso=g;
                        }
                        if (flag1==1)
                        {
                            a=a*365;
                            mese=mese*30;
                            g=g + m + a;
                            ingresso = g- ingresso;
                            flag1 = 0;
                            if (ingresso> 0 && ingresso <2)
                            {
                                x++;
                            }
                        }
                        flag1=1;
                    }
                    flag1=0;
                }
            }
    }
    diff = (float)diff/cont;
    if (flag==0) printf("il numero di visite nell anno %d e' di %d\n e l'incasso tot e' di %.1f\n il tempo medio durante l'anno e' di %.1f\n",anno,cont,prezzo,diff);
    if ((strcmp(argv[2],"G"))==0) printf("Ci sono %d utenti che hanno effettuato visite a distanza inferiore di due giorni.\n",x);
    fclose(fp);
    return 0;
}
