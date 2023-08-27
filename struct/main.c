#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct riga{char materia[21];char nome[21];char cognome[21];int periodo;int crediti;float superamento;};
int main(int argc, char *argv[])
{
    int i=0,cred_max=0,max=0,k=0,f=0,p=0,a=0, flag=0;
    char prof1[21],prof2[21];
    float sup,sup1,sup_max=0;
    struct riga prof[80];
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
    while (fscanf(fp,"%s %s %s %d %d %f",prof[i].materia,prof[i].nome,prof[i].cognome,&prof[i].periodo,&prof[i].crediti,&prof[i].superamento)!=EOF)
    {
        if ((strcmp(prof1,prof[i].nome)==0) && (strcmp(prof2,prof[i].cognome)==0))
        {
            cred_max = cred_max + prof[i].crediti;
            sup_max = sup_max + prof[i].superamento;
            a++;
        }
        if(i==0)
        {
            max=prof[i].crediti;
            k=i;
        }
        if (prof[i].crediti>max)
        {
            max=prof[i].crediti;
            k=i;
        }
        if (prof[i].periodo==1)
        {
            if (i==0)
            {
                sup=prof[i].superamento;
                f=i;
            }
            if (prof[i].superamento<sup)
            {
                sup=prof[i].superamento;
               f=i;
            }
        }
        if (prof[i].periodo==2)
        {
            if (flag ==0)
            {
                sup1=prof[i].superamento;
                p=i;
            }
            flag=1;
            if (prof[i].superamento<sup1)
            {
                sup1=prof[i].superamento;
                p=i;
            }
        }
       i++;
    }
    if (cred_max!=0)
    {
        sup_max=sup_max/a;
        printf("\nil prof %s %s ha come somma di crediti %.1d\ne la media tot del superamento delle sue materie e' di : %.2f%% \n",prof1,prof2,cred_max,sup_max);
    }
    else if (cred_max==0) printf("il prof cercato non e' in elenco.\n");
    printf("\nla materia che assegna piu crediti e' : %s con %d crediti \n",prof[k].materia,max);
    printf("\nla materia piu difficile da superare al primo periodo e' : %s con una percentuale di %.0f%% \n",prof[f].materia,sup);
    printf("\nla materia piu difficile da superare al secondo periodo e' : %s con una percentuale di %.0f%% \n",prof[p].materia,sup1);
    fclose(fp);
    return 0;
}
