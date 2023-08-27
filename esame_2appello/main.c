#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3
int main(int argc, char *argv[])
{
    FILE *fp,*fi;
    int v[100]={0},i,j,max,pos=0,a=0;
    char m[2*N][100],c[100];
    fp = fopen(argv[1],"r");
    if (fp == NULL )
    {
        printf("errore primo file.\n");
        return -1;
    }
    fi= fopen(argv[2],"w");
    if (fi == NULL)
    {
        printf("errore secondo file.\n");
        return -2;
    }
    if (argc != 3)
    {
        printf("errore argomenti.\n");
        return -3;
    }
    /*for (i=0;i<2*N;i++)
    {
        for (j=0;j<100;j++)
        {
            fscanf(fp,"%c",&m[i][j]);
        }
    }*/
     while ((fscanf(fp,"%s",c))!=EOF)
    {
        a=strlen(c);
    }

    /*for (i=0;i<2*N;i++)
    {
        for (j=0;j<a;j++)
        {
            fscanf(fp,"%c",&m[i][j]);
        }
    }*/
    for (i=0;i<2*N;i++)
    {
        for (j=0;j<a;j++)
        {
            if (c[i][j]=='x')
            {
                if (i>=0 && i<N)
                {
                    v[j]=v[j]+1;
                }
                else if (i>=N && i<2*N)
                {
                    v[j]=v[j]-1;
                }
            }
        }
    }
    for (i=0;i<2*N;i++)
    {
        for (j=0;j<a;j++)
        {
            printf("%c",c[i][j]);
        }
        printf("\n");
    }
    for (j=0;j<a;j++)
    {
        fprintf(fi,"%d ",v[j]);
    }
    max=v[0];
    for (j=0;j<a;j++)
    {
        if (v[j]>max) {
                max=v[j];
        pos = j;}
    }
    printf("il massimo risultato e' %d nella posizione %d",max,pos+1);
    fclose(fp);
    fclose(fi);
    return 0;
}
