#include <stdio.h>
#include <stdlib.h>

int main()
{
    int giorno,mese,anno;
    printf("inserisci la data in formato gg/m/aaaa :");
    scanf("%d/%d/%d",&giorno,&mese,&anno);
    switch ( mese )
    {
    case 1:
        printf("%d/gennaio/%d",giorno,anno);
        break;
    case 2:
        printf("%d/febbraio/%d",giorno,anno);
        break;
    case 3:
        printf("%d/marzo/%d",giorno,anno);
        break;
    case 4:
        printf("%d/aprile/%d",giorno,anno);
        break;
    case 5:
        printf("%d/maggio/%d",giorno,anno);
        break;
    case 6:
        printf("%d/giugno/%d",giorno,anno);
        break;
    case 7:
        printf("%d/luglio/%d",giorno,anno);
        break;
    case 8:
        printf("%d/agosto/%d",giorno,anno);
        break;
    case 9:
        printf("%d/settembre/%d",giorno,anno);
        break;
    case 10:
        printf("%d/ottobre/%d",giorno,anno);
        break;
    case 11:
        printf("%d/novembre/%d",giorno,anno);
        break;
    case 12:
        printf("%d/dicembre/%d",giorno,anno);
        break;
    default :
        printf("non e' un mese");
        break;
    }
    return 0;
}
