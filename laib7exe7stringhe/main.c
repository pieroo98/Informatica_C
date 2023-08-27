#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 9999
int main()
{
    char c,c1[N];
    int i, caratteri=0, riga=0, flag=0;
    float lettere=0, parola=0, media=0;
    printf ("inserisci un testo libero : ");
    while ((c=getchar())!=EOF)
    {
        c1[caratteri]=c;
        caratteri++;
    }
    for (i=0;i<caratteri;i++)
    {
        if ((isalpha(c1[i])) && flag ==0)
        {
            parola++;
            flag=1;
        }
        if (isalpha(c1[i])) lettere++;
        if (isspace(c1[i])) flag=0;
        if (iscntrl(c1[i]))
        {
            riga++;
        }
    }
    media =(lettere/parola);
    printf("\nil numero di caratteri inseriti e' : %d\n",caratteri);
    printf("il numero di parole sono : %.0f\n",parola);
    printf("numero totale di lettere e' : %.0f\n",lettere);
    printf("il numero di righe e' : %d\n",riga);
    printf("la lunghezza media di una parola e': %.2f\n",media);
    return 0;
}
