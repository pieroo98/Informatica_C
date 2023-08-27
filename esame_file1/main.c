#include <stdio.h>
#include <stdlib.h>
float dislivellomedio (float d, float k);
int main(int argc, char *argv[])
{
    FILE *f;
    int passo=0, alt, alt_prec, minuti, secondi, discesa=0, salita=0, km_tot=0;
    float secxpasso, secxkm=0;
    if (argc!=2)
    {
        return 1;
    }
    f= fopen(argv[1],"r");
    if (f==NULL)
    {
        printf("errore apertura file\n");
        return -1;
    }
    while (fscanf(f,"%f%d",&secxpasso,&alt)!=EOF)
    {
        if (passo ==0)
        {
            alt_prec= alt;
        }
        else {
            secxkm += secxpasso;
            if (passo%100==0)
            {
                km_tot++;
                minuti=(int)secxkm/60;
                secondi= (int)secxkm - minuti*60;
                printf("km %d: \n",km_tot);
                printf("%d minuti %d secondi\n",minuti,secondi);
                secxkm=0;
            }
            if (alt >= alt_prec){
                salita += (alt - alt_prec);}
            else {
                discesa += (alt_prec - alt);
                alt_prec=alt;}
        }
        passo++;
    }
    fclose(f);
    return 0;
}
float dislivellomedio (float d, float k)
{
    return (d/k);
}
