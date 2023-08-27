#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    char c;
    int na=0, no=0, np=0, nc=0, nn=0;
    f = fopen("testo.txt","r");
    if (f== NULL)
    {
        printf("non sono riuscito ad aprire testo.txt\n");
        return -1;
    }
    while ((c=fgetc(f))!= EOF)
    {
        nc++;
        if (isalpha(c)) na++;
        else if (isdigit(c)) nn++;
        else if (ispunct(c)) np++;
        else no++;
    }
    printf("%% di alfabetici = %7.2f\n",(100.0*(float)na/nc));
    printf("%% di numerici = %7.2f\n",(100.0*(float)nn/nc));
    printf("%% di punti = %7.2f\n",(100.0*(float)np/nc));
    printf("%% di altri = %7.2f\n",(100.0*(float)no/nc));
    fclose(f);
    return 0;
}
