#include <stdio.h>
#include <stdlib.h>
#define D 10
int main()
{
    int i,j,a,b,riga,colonna, salto = 1;
    float x,M[D][D], max;
    FILE *fp;
    fp=fopen("matrice.txt","r");
    if (fp==NULL)
    {
        printf("errore apertura file\n");
        return 1;
    }
    for (i=0;i<D;i++)
        {
            for(j=0;j<D;j++)
            {
                fscanf(fp,"%f",&M[i][j]);
            }
        }
    fclose(fp);
    for (i=0;i<D;i++)
        {
            for(j=0;j<D;j++)
            {
                printf("%.2f ",M[i][j]);
            }
            printf("\n");
        }

    printf("\ninserisci coordinate x y : ");
    scanf("%d %d",&riga,&colonna);
    riga = riga - 1;
    colonna = colonna - 1;
    while(salto == 1){
        max = 0;
        a = -1;
        b = -1;
        for (i=-1;i<2;i++)
        {
            for(j=-1;j<2;j++)
            {
                if (!(i==0 && j==0) && riga + i >= 0 && riga + i < D && colonna + j >= 0 && colonna + j < D){
                    if(M[riga + i][colonna + j] > max){
                        max = M[riga + i][colonna + j];
                        a = riga + i;
                        b = colonna + j;
                    }
                }
            }
        }
        if(max > M[riga][colonna]){
            printf("salto in (x, y) %d, %d\n", a + 1, b + 1);
            riga = a;
            colonna = b;
        }
        else{
            salto = 0;
        }
    }



    return 0;
}
