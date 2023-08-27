#include <stdio.h>
#include <stdlib.h>
#define N 10
int main(int argc, char *argv[])
{
    char m1[N][N],m2[N][N];
    FILE *f1,*f2;
    int i,j,x,y,m,estensione=0,modifica=0;
    f1 =fopen("roof1.txt","r");
    if (f1==NULL)
    {
        printf("errore f1\n");
        return -1;
    }
    f2= fopen("roof2.txt","r");
    if (f2==NULL)
    {
        printf("errore f2\n");
        return -1;
    }
    if (argc!=4)
    {
        printf("errore argomenti\n");
        return -1;
    }
    x=atoi(argv[1])-1;
    y=atoi(argv[2])-1;
    m=atoi(argv[3]);
    for (i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            m1[i][j]=fgetc(f1);
            m2[i][j]=fgetc(f2);
        }
        fgetc(f1);
        fgetc(f2);
    }
    for (i=x;i<x+m;i++)
    {
        for (j=y;j<y+m;j++)
        {
            if(m1[i][j]=='0' && m2[i][j]=='#')
            {
                modifica=1;
                if (i-1>=0 && m1[i-1][j]=='#') estensione=1; //nord
                if (i+1<N && m1[i+1][j]=='#') estensione=1; //sud
                if (j+1<N && m1[i][j+1]=='#') estensione=1;//est
                if (j-1>=0 && m1[i][j-1]=='#') estensione=1; //ovest
                if (estensione!=0) printf("presunta estensione m[%d][%d]\n",i+1,j+1);
                else printf("nuova costruzione m[%d][%d]\n",i+1,j+1);
            }
        }
    }
    if (modifica==0) printf("nessuna nuova modifica\n");
    fclose(f1);
    fclose(f2);
    return 0;
}
