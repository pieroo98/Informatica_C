#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    FILE *fin;
    FILE *fout;
    fin = fopen("estemi.txt","r");
    if (fin == NULL)
    {
        printf("errore apertura estremi.txt\n");
        return -1;
    }
    fout = fopen("diff.txt","w");
    if (fout== NULL)
    {
        printf("errore di apertura diff.txt\n");
        return -2;
    }
    while ((fscanf(fin,"%d %d",&x,&y))!=EOF)
    {
        if (x>y) fprintf(fout,"%d ",x-y);
        else fprintf(fout,"%d ",y-x);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}
