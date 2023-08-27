#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    FILE *fp,*fi;
    char numero[15+1],amico;
    int g,mese,a,h,m,s,h1,m1,s1,i=0,mese1,cont=0;
    float v[4],tot=0,sconto=0,tot1=0;
    if (argc!=3)
    {
        printf("errore argomenti.\n");
        return -1;
    }
    fp = fopen("clienti.txt", "r");
    if (fp == NULL)
    {
        printf("errore apertura file.\n");
        return -2;
    }
    fi = fopen("tariffe.txt", "r");
    if (fi == NULL)
    {
        printf("errore apertura secondo file.\n");
        return -3;
    }
    while ((fscanf(fi,"%f",&v[i]))!=EOF)
    {
        i++;
    }
    sscanf(argv[2],"%d",&mese1);
    while (fscanf(fp,"%s %d/%d/%d %d:%d:%d %d:%d:%d %c",numero,&g,&mese,&a,&h,&m,&s,&h1,&m1,&s1,&amico)!=EOF)
    {
        if (strcmp(argv[1],numero)==0)
        {
            if (mese1== mese)
            {
                cont++;
                if (h>=0 && h<=5)
                {
                    h=h*3600;
                    m=m*60;
                    s=s+m+h;
                    h1=h1*3600;
                    m1=m1*60;
                    s1=s1+m1+h1;
                    tot = ((s1- s)/30*v[0]);
                    if (amico == 'S') {
                            tot1 = tot/2;
                            sconto = (tot -tot1); }
                }
                if (h>=6 && h<=11)
                {
                    h=h*3600;
                    m=m*60;
                    s=s+m+h;
                    h1=h1*3600;
                    m1=m1*60;
                    s1=s1+m1+h1;
                    tot = ((s1- s)/30*v[1]);
                    if (amico == 'S') {
                            tot1 = tot/2;
                            sconto = (tot -tot1); }
                }
                if (h>=12 && h<=17)
                {
                    h=h*3600;
                    m=m*60;
                    s=s+m+h;
                    h1=h1*3600;
                    m1=m1*60;
                    s1=s1+m1+h1;
                    tot = ((s1- s)/30*v[2]);
                    if (amico == 'S') {
                            tot1 = tot/2;
                            sconto = (tot -tot1); }
                }
                if (h>=18 && h<=23)
                {
                    h=h*3600;
                    m=m*60;
                    s=s+m+h;
                    h1=h1*3600;
                    m1=m1*60;
                    s1=s1+m1+h1;
                    tot = ((s1- s)/30*v[3]);
                    if (amico == 'S') {
                            tot1 = tot/2;
                            sconto = (tot -tot1); }
                }
            }
        }
    }
    fclose(fp);
    fclose(fi);
    printf("bolletta telefonica : %.2f\n",tot);
    printf("numero chiamate : %d",cont);
    printf("sconto ricevuto: %.2f",sconto);
    return 0;
}
