#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[5][5],i,j;
    printf("iserisci i valori di una matrice 5x5 ");
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("m[%d][%d]= ",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("%3d ",m[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            if ((m[i][j]==m[i][j+1]) && (m[i][j+1]==m[i][j+2]))
            {
                printf("la sequenza di %d e' presente nella riga %d\n",m[i][j],i+1);
            }
            if ((m[i][j]==m[i+1][j]) && (m[i+1][j]==m[i+2][j]))
            {
                printf("la sequenza di %d e' presente nella colonna %d\n",m[i][j],j+1);
            }
        }
    }
    return 0;
}
