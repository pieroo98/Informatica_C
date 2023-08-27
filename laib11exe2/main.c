#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct nomi { char nome[20]; char cognome[20]; char fisso[20]; char mobile[20]; } Nomi;
int main()
{
    int i,cont=0,flag=1;
    char c,c1[20],c2[2+1],c3;
    Nomi rubrica[100];
    do {

    printf("\ndigita 's' per inserire un nuovo nome in rubrica o 'r' per stampare la rubrica\n");
    scanf("%c",&c);
    if (c=='s')
    {
        printf("inserisci un nuovo nome in rubrica\n");
        scanf("%s",c1);
        for (i=0;i<100;i++)
        {
            if(strcmp(rubrica[i].nome,c1)==0)
            {
                printf("nome inserito gia presente in rubrica, sicuro di voler inserire?\n");
                printf("scrivi 'si' per inserire o scrivi 'no' per non inserire\n");
                scanf("%s",c2);
                if ((strcmp(c2,"si"))==0)
                {
                    flag=0;
                }
                if ((strcmp(c2,"no"))==0)
                {
                    flag=2;
                }
            }
        }
        if (flag==0)
                {
                    strcpy(rubrica[cont].nome,c1);
                    printf("inserisci il cognome : \n");
                    scanf("%s",rubrica[cont].cognome);
                    printf("inserisci il numero fisso : \n");
                    scanf("%s",rubrica[cont].fisso);
                    printf("inserisci il numero mobile : \n");
                    scanf("%s",rubrica[cont].mobile);
                }
        else if (flag!=2)
                {
                    strcpy(rubrica[cont].nome,c1);
                    printf("inserisci il cognome : \n");
                    scanf("%s",rubrica[cont].cognome);
                    printf("inserisci il numero fisso : \n");
                    scanf("%s",rubrica[cont].fisso);
                    printf("inserisci il numero mobile : \n");
                    scanf("%s",rubrica[cont].mobile);
                }
            cont++;
        printf("\nse vuoi chiudere il programma inserisci 'a'\n");
        scanf("%c",&c3);
    }
    if (c=='r')
    {
        if (cont==0) printf("\nrubrica ancora vuota\n");
        else
        {
            for (i=0;i<cont;i++)
            {
                printf("%s %s %s %s\n",rubrica[i].nome,rubrica[i].cognome,rubrica[i].fisso,rubrica[i].mobile);
            }
        }
        printf("\nse vuoi chiudere il programma inserisci 'a'\n");
        scanf("%c",&c3);
    }
    }while (c!='a');
    return 0;
}
