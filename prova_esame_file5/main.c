#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *f1,*f2,*f3;
    int M[1024+2][768+2]={0};
    int K[3][3],i,j;
    if (argc!=3)
    {
        printf("errore argc\n");
        return -1;
    }
    f1 =fopen(argv[1],"r");
    if (f1==NULL)
    {
        printf("errore f1\n");
        return -1;
    }
    f2 =fopen(argv[2],"r");
    if (f2==NULL)
    {
        printf("errore f2\n");
        return -1;
    }
    f3 =fopen(argv[3],"w");
    if (f3==NULL)
    {
        printf("errore f3\n");
        return -1;
    }
    for (i=1;i<=1024;i++)
    {
        for (j=1;j<=768;j++)
        {
            fscanf(f1,"%d",&M[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            fscanf(f2,"%d",&K[i][j]);
        }
    }
    for (i=1;i<=1024;i++)
    {
        for (j=1;j<=768;j++)
        {
            M[i][j]=M[i-1][j-1]*K[0][0];
        }
    }
    for (i=1;i<=1024;i++)
    {
        for (j=1;j<=768;j++)
        {
            fprintf(f3,"%d",M[i][j]);
            printf("\n");
        }
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    return 0;
}
