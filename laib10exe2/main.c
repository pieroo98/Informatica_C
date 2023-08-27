#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a,b;
    float c;
    char e;
    if (argc!=4)
    {
        printf("errore nell'inserimento dei 3 valori");
        return 1;
    }
    if (sscanf(argv[1],"%d",&a)!=1)
    {
        printf("errore argv1");
        return 1;
    }
    if (sscanf(argv[2],"%d",&b)!=1)
    {
        printf("errore argv2");
        return 1;
    }
    if (sscanf(argv[3],"%c",&e)!=1)
    {
        printf("errore argv3");
        return 1;
    }
    if (argv[3][0]=='a')
    {
        c=a+b;
        printf("%.2f",c);
    }
    if (argv[3][0]=='b')
    {
        if (a>b)
        {
            c=a-b;
            printf("%.2f",c);
        }
        else
        {
            c=b-a;
            printf("%.2f",c);
        }
    }
    if (argv[3][0]=='c')
    {
        c=a*b;
        printf("%.2f",c);
    }
    if (argv[3][0]=='d')
    {
        if (b!=0)
        {
            c=(float)a/b;
            printf("%.2f",c);
        }
    }
    return 0;
}
