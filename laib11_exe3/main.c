#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int periodo,crediti,i=0,max,a=0,flag=0;
    float superamento,sup=0,sup1=0,sup_max=0,cred_max=0;
    char materia[20+1],nome[20+1],cognome[20+1],mat[20+1],mat1[20+1],mat2[20+1],prof1[20+1],prof2[20+1];
    FILE *fp;
    fp = fopen(argv[1], "r");
    if (fp== NULL)
    {
        printf("errore apertura file.\n");
        return -1;
    }
    if (argc!=2)
    {
        printf("errore argomenti\n");
        return -2;
    }
    printf("inserisci il nome del prof: ");
    scanf("%s",prof1);
    printf("inserisci il cognome del prof: ");
    scanf("%s",prof2);
    while (fscanf(fp,"%s %s %s %d %d %f",materia,nome,cognome,&periodo,&crediti,&superamento)!=EOF)
    {
        if ((strcmp(prof1,nome)==0) && (strcmp(prof2,cognome)==0))
        {
            cred_max = cred_max + crediti;
            sup_max = sup_max + superamento;
            a++;
        }
        if(i==0)
        {
            max=crediti;
            strcpy(mat,materia);
        }
        if (crediti>max)
        {
            max=crediti;
            strcpy(mat,materia);
        }
        if (periodo==1)
        {
            if (i==0)
            {
                sup=superamento;
                strcpy(mat1,materia);
            }
            if (superamento<sup)
            {
                sup=superamento;
                strcpy(mat1,materia);
            }
        }
        if (periodo==2)
        {
            if (flag ==0)
            {
                sup1=superamento;
                strcpy(mat2,materia);
            }
            flag=1;
            if (superamento<sup1)
            {
                sup1=superamento;
                strcpy(mat2,materia);
            }
        }
       i++;
    }
    if (cred_max!=0)
    {
        sup_max=sup_max/a;
        printf("\nil prof %s %s ha come somma di crediti %.1f\ne la media tot del superamento delle sue materie e' di : %.2f%% \n",prof1,prof2,cred_max,sup_max);
    }
    else if (cred_max==0) printf("il prof cercato non e' in elenco.\n");
    printf("\nla materia che assegna piu crediti e' : %s con %d crediti \n",mat,max);
    printf("\nla materia piu difficile da superare al primo periodo e' : %s con una percentuale di %.0f%% \n",mat1,sup);
    printf("\nla materia piu difficile da superare al secondo periodo e' : %s con una percentuale di %.0f%% \n",mat2,sup1);
        fclose(fp);
    return 0;
}
