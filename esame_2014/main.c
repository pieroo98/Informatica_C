#include <stdio.h>
#include <stdlib.h>
#define N 9
#define M 3
int main(int argc, char * argv[])
{
    FILE *fp,*fi;
    int m[N][N],sub_m[M][M],i,j,x,y,a,b,c,d=0,v[M][M];
    fp = fopen(argv[1],"r");
    if (fp == NULL)
    {
        printf("errore apertura primo file.\n");
        return -1;
    }
    fi = fopen(argv[2],"r");
    if (fi == NULL)
    {
        printf("errore apertura secondo file.\n");
        return -2;
    }
    if (argc!=3)
    {
        printf("errore argomenti.\n");
        return -3;
    }
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            fscanf(fp,"%d",&m[i][j]);
        }
    }
    fclose(fp);
    for (x=0;x<M;x++)
    {
        for (y=0;y<M;y++)
        {
            fscanf(fi,"%d",&sub_m[x][y]);
        }
    }
    fclose(fi);
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            if (m[i][j]==sub_m[0][0])
            {
                a=i;
                b=j;
                c=0;
                d++;
                for (a=i, x=0 ;a<i+M && x<M;a++, x++)
                {
                    for (b=j, y=0;b<j+M && y<M;b++, y++)
                    {
                        if (m[a][b]==sub_m[x][y])
                        {
                            c++;
                            v[x][y]=m[a][b];
                        }
                    }
                }
                printf("la matrice sub_min e' stata trovata %d volte dentro la prima matrice con %d ripetizioni\ncon ingresso %d,%d e uscita %d,%d\n",d,c,a-3,b-3,a,b);
                printf("\n");
                for (x=0;x<M;x++)
                {
                    for (y=0;y<M;y++)
                    {
                        printf("%d ",v[x][y]);
                    }
                    printf("\n");
                }
                printf("\n");
            }
        }
    }
    return 0;
}
