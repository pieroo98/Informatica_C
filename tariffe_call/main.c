#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct credito {int prefisso2; float tariffe1;};
int main(int argc, char *argv[])
{
    FILE *fp,*fi;
    struct credito cell[20];
    float tariffe,costo=0;
    int h,m,s,h1,m1,s1,i=0,min_tot=0,j=0,x=0,prefisso1,prefisso,cont=1;
    char fisso[10+1];
    if (argc!=3)
    {
        printf("errore argomenti.\n");
        return -3;
    }
    fp = fopen(argv[1], "r");
    if (fp==NULL)
    {
        printf("errore apertura file\n");
        return -1;
    }
    fi = fopen(argv[2], "r");
    if (fi == NULL)
    {
        printf("errore apertura file\n");
        return -2;
    }
    while ((fscanf(fi,"%d %f",&prefisso1,&tariffe))!=EOF)
    {
        cell[j].prefisso2=prefisso1;
        cell[j].tariffe1=tariffe;
        j++;
        x=j;
    }
    fclose(fi);
    while (((fscanf(fp,"%d %s %d:%d:%d %d:%d:%d",&prefisso,fisso,&h,&m,&s,&h1,&m1,&s1))!=EOF))
    {
        for (j=0;j<x;j++)
        {
            if (prefisso==cell[j].prefisso2)
            {
                if (h>18 || h<8)
                {
               h=h*3600;
               m=m*60;
               s=s+m+h;
               h1=h1*3600;
               m1=m1*60;
               s1=s1+m1+h1;
               min_tot=s1-s;
               costo = costo + (float)min_tot*cell[j].tariffe1*(8/10);
                }
                else {
           h=h*3600;
           m=m*60;
           s=s+m+h;
           h1=h1*3600;
           m1=m1*60;
           s1=s1+m1+h1;
           min_tot=s1-s;
           costo = costo + (float)min_tot*cell[j].tariffe1;}
           cont++;
            }
            if ((j==(x-1)) && (prefisso!=cell[j].prefisso2) && (cont!=i))
            {
                if (h>18 || h<8)
                {
               h=h*3600;
               m=m*60;
               s=s+m+h;
               h1=h1*3600;
               m1=m1*60;
               s1=s1+m1+h1;
               min_tot=s1-s;
               costo = costo + (float)min_tot*(4/10);
                }
                else {
               h=h*3600;
               m=m*60;
               s=s+m+h;
               h1=h1*3600;
               m1=m1*60;
               s1=s1+m1+h1;
               min_tot=s1-s;
               costo = costo + (float)min_tot*(0.5);}
            }
        }
        i++;
    }
    fclose(fp);
    costo=costo/100;
    printf("le chiamate totali sono %d per un tot di %.2f euro ",i,costo);
    return 0;
}
