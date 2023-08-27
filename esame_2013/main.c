#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct aereo {char iata[4]; float lat; float log;};
int main(int argc, char *argv[])
{
    FILE *fp,*fp1,*fp2;
    int i=0,k=0,j=0,x,z;
    float lat1, log1,latitudine,longitudine,diff=0,diff_min=0;
    char iata1[4],nome[41],cognome[41],localita[41],nome1[41];
    struct aereo porto[2500];
    if (argc!= 3)
    {
        printf("errore argomenti.\n");
        return -1;
    }
    fp = fopen(argv[1],"r");
    if (fp ==NULL)
    {
        printf("errore apertura primo file.\n");
        return -2;
    }
    fp1=fopen("aereoporti.txt","r");
    if (fp1==NULL)
    {
        printf("errore apertura secondo file.\n");
        return -3;
    }
    fp2 = fopen(argv[2],"w");
    if (fp2== NULL)
    {
        printf("errore apertura terzo file.\n");
        return -4;
    }
    while ((fscanf(fp1,"%s %f %f",iata1,&lat1,&log1))!=EOF)
    {
        strcpy(porto[i].iata,iata1);
        porto[i].lat=lat1;
        porto[i].log=log1;
        i++;
        k=i;
    }
    fclose(fp1);
    while ((fscanf(fp,"%s %s %s %f %f",nome,cognome,localita,&latitudine,&longitudine))!=EOF)
    {
        strcpy(nome1,nome);
        if ((strcmp(nome1,nome))==0)
        {
            diff=sqrt(((latitudine-porto[0].lat)*(latitudine-porto[0].lat))+((longitudine-porto[0].log)*(longitudine-porto[0].log)));
            for (i=1;i<k;i++)
            {
                diff_min=sqrt(((latitudine-porto[i].lat)*(latitudine-porto[i].lat))+((longitudine-porto[i].log)*(longitudine-porto[i].log)));
                x=i;
                if (diff_min < diff)
                {
                    diff=diff_min;
                    z=x;
                }
            }
            fprintf(fp2,"%s %s %s\n",nome,cognome,porto[z].iata);
        }
        j++;
    }
    fclose(fp);
    fclose(fp2);
    return 0;
}
