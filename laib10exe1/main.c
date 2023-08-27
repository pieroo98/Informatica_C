#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b,c;
    if (sscanf(argv[1],"%d",&a)!=1)
    {
        printf("errore argv1\n");
        return 1;
    }
    if (sscanf(argv[2],"%d",&b)!=1)
    {
        printf("errore argv2\n");
        return 1;
    }
    if (argc!=3)
    {
        printf("errore nell'inserimento del valori\n");
        return 1;
    }
    if ((a<-10000) || (a>10000))
    {
        printf("inserisci i valori correttamente di a\n");
        return 1;
    }
    if ((b<-10000) || (b>10000))
    {
        printf("inserisci i valori correttamente di b\n");
        return 1;
    }
    c=a+b;
    printf("%d",c);
    return 0;
}
