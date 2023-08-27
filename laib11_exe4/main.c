#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    int h,m,s,h1,m1,s1,tot=0;
    float a,b,c,a1,b1,c1;
    char citta[20+1],citta1[20+1];
    if (argc!=3)
    {
        printf("errore argomenti\n");
        return -1;
    }
    fp = fopen(argv[1],"r");
    if (fp == NULL)
    {
        printf("errore apertura file\n");
        return -2;
    }
    while (fscanf(fp,"%s %d:%d:%d %s %d:%d:%d",citta,&h,&m,&s,citta1,&h1,&m1,&s1)!=EOF)
    {
        if (strcmp(argv[2],citta)==0)
        {
            h=h*3600;
            m=m*60;
            s=s+m+h;
            h1=h1*3600;
            m1=m1*60;
            s1=s1+m1+h1;
            tot=s1-s;
            a=tot/3600;
            b=(tot%3600)/60;
            c=(tot%60);
            printf("il treno che parte da %s arriva a %s in %2.0f:%.0f:%.0f \n",citta,citta1,a,b,c);
        }
        if (strcmp(argv[2],citta1)==0)
        {
            h=h*3600;
            m=m*60;
            s=s+m+h;
            h1=h1*3600;
            m1=m1*60;
            s1=s1+m1+h1;
            tot=s1-s;
            a1=tot/3600;
            b1=(tot%3600)/60;
            c1=(tot%60);
            printf("il treno che parte da %s arriva a %s in %2.0f:%.0f:%.0f \n",citta,citta1,a1,b1,c1);
        }
    }
    fclose(fp);
    return 0;
}
