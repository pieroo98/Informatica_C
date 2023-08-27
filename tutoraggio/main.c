#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int i,y,x,j, primo, valore;
    FILE *f1;
    f1= fopen("dati.txt","r");
    if (argc!=3)
    {
        printf("errore nell' introduzione dei dati\n");
        return -1;
    }

    if (f1==NULL)
    {
        printf("errore apertura file\n");
        return 1;
    }
    x=atoi(argv[1]);
    y=atoi(argv[2]);
    while ((fscanf(f1,"%d",&j))!=EOF)
    {
        primo = 1;
        if (j >= x && j <= y){
            valore = j;
            while(valore != 0 && primo == 1){
                for(i = 2; i < valore/2+1 ; i++){
                    if(valore % i == 0){
                        primo = 0;
                    }
                }

                valore = valore / 10;
            }

            if(primo == 1){
                printf("numero primo trovato: %d\n", j);

            }
        }
    }
    fclose(f1);
    return 0;
}
