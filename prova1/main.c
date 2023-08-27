#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    char cod_ut [12+1]={'\0'},cod_ut1 [12+1]={'\0'},cod_ut2 [12+1]={'\0'},cod_ut3 [12+1]={'\0'},cod_ut4 [12+1]={'\0'};
    int t_desk=0, t_mob=0, n_click=0, n_post=0, n_share=0, n_like=0;
    float redd, rapp, redd_max1=0, redd_max2=0, rapp1=0, rapp2=0;
    if (argc!=2)
    {
        printf("errore negli argomenti\n");
        return 1;
    }
    fp=fopen(argv[1],"r");
    if (fp==NULL)
    {
        printf("errore apertura pf\n");
        return 3;
    }
    if (strcmp(argv[1],"testo.txt")!=0)
    {
        printf("errore apertura file\n");
        return 2;
    }
    while (fscanf(fp,"%s %d %d %d %d %d %d",cod_ut,&t_desk,&t_mob,&n_click,&n_post,&n_share,&n_like)!=EOF)
    {
        redd = t_desk + 1.5*t_mob + 2.0*n_click + 1.8*n_post + 1.5*n_share + n_like;
        if (redd>redd_max1)
        {
            redd_max1=redd;
            strcpy(cod_ut1,cod_ut);
        }
        if ((redd>redd_max2)&& (redd<redd_max1))
        {
            redd_max2=redd;
            strcpy(cod_ut2,cod_ut);
        }
        rapp=(float)(t_desk + t_mob)/(n_click + n_post + n_share + n_like);
        if(rapp>rapp1)
        {
            rapp1=rapp;
            strcpy(cod_ut3,cod_ut);
        }
        if((rapp>rapp2) && (rapp<rapp1))
        {
            rapp2=rapp;
            strcpy(cod_ut4,cod_ut);
        }
    }
    printf("i due piu redditizi sono : \n");
    printf("%s %.2f\n",cod_ut1,redd_max1);
    printf("%s %.2f\n",cod_ut2,redd_max2);
    printf("\nI 2 utenti piu promettenti sono: \n");
    printf("%s %.2f\n",cod_ut3,rapp1);
    printf("%s %.2f\n",cod_ut4,rapp2);

    fclose(fp);
    return 0;
}
