#include <stdio.h>
#include <stdlib.h>
int bin (int a);
int tre (int b);
int quad (int c);
int cinque (int d);
int sex (int e);
int oct (int f);
int main()
{
    int x2,x3,x4,x5,x6,x8,v2[10],v3[10],v4[10],v5[10],v6[10],v8[10];
    printf("inserisci un numero : ");
    scanf("%d",&x2);
    x3=x2;
    x4=x2;
    x5=x2;
    x6=x2;
    x8=x2;
    v2[10]=bin(x2);
    v3[10]=tre(x3);
    v4[10]=quad(x4);
    v5[10]=cinque(x5);
    v6[10]=sex(x6);
    v8[10]=oct(x8);
    return 0;
}
int bin (int x2)
{
    int r=0,d=1,v[10]={0},a=0,i,y,j,palindromo=1;
    r=x2%2;
    d=x2/2;
    v[0]=r;
    for (i=1;i<10 && d!=0;i++)
    {
        r=d%2;
        d=d/2;
        a++;
        v[i]=r;
    }
    for(y=0, j = a ;y<a/2 && palindromo == 1;y++, j--) {
            if ( v[y]!=v[j]) {
                palindromo = 0;
            }
    }
    if(palindromo == 1) {
        printf("Palindromo in base due\n");
        printf("il numero %d decimale diventa in binario : ",x2);
    for (i=a;i>=0;i--)
    {
        printf ("%d ",v[i]);
    }
    }
    return v[10];
}
int tre (int x3)
{
    int r=0,d=1,v[10]={0},a=0,i,j,y,palindromo=1;
    r=x3%3;
    d=x3/3;
    v[0]=r;
    for (i=1;i<10 && d!=0;i++)
    {
        r=d%3;
        d=d/3;
        a++;
        v[i]=r;
    }
    for(y=0, j = a ;y<a/2 && palindromo == 1;y++, j--) {
            if ( v[y]!=v[j]) {
                palindromo = 0;
            }
    }
    if(palindromo == 1) {
        printf("\nPalindromo in base tre\n");
        printf("il numero %d decimale diventa in base tre : ",x3);
    for (i=a;i>=0;i--)
    {
        printf ("%d ",v[i]);
    }
    }
    return v[10];
}
int quad (int x4)
{
    int r=0,d=1,v[10]={0},a=0,i,y,j,palindromo=1;
    r=x4%4;
    d=x4/4;
    v[0]=r;
    for (i=1;i<10 && d!=0;i++)
    {
        r=d%4;
        d=d/4;
        a++;
        v[i]=r;
    }
    for(y=0, j = a ;y<a/2 && palindromo == 1;y++, j--) {
            if ( v[y]!=v[j]) {
                palindromo = 0;
            }
    }
    if(palindromo == 1) {
        printf("\nPalindromo in base quattro\n");
        printf("il numero %d decimale diventa in base quattro : ",x4);
    for (i=a;i>=0;i--)
    {
        printf ("%d ",v[i]);
    }
    }
    return v[10];
}
int cinque (int x5)
{
    int r=0,d=1,v[10]={0},a=0,i,y,j,palindromo=1;
    r=x5%5;
    d=x5/5;
    v[0]=r;
    for (i=1;i<10 && d!=0;i++)
    {
        r=d%5;
        d=d/5;
        a++;
        v[i]=r;
    }
    for(y=0, j = a ;y<a/2 && palindromo == 1;y++, j--) {
            if ( v[y]!=v[j]) {
                palindromo = 0;
            }
    }
    if(palindromo == 1) {
        printf("\nPalindromo in base cinque\n");
        printf("il numero %d decimale diventa in base cinque : ",x5);
    for (i=a;i>=0;i--)
    {
        printf ("%d ",v[i]);
    }
    }
    return v[10];
}
int sex (int x6)
{
    int r=0,d=1,v[10]={0},a=0,i,y,j,palindromo=1;
    r=x6%6;
    d=x6/6;
    v[0]=r;
    for (i=1;i<10 && d!=0;i++)
    {
        r=d%6;
        d=d/6;
        a++;
        v[i]=r;
    }
    for(y=0, j = a ;y<a/2 && palindromo == 1;y++, j--) {
            if ( v[y]!=v[j]) {
                palindromo = 0;
            }
    }
    if(palindromo == 1) {
        printf("\nPalindromo in base sei\n");
        printf("il numero %d decimale diventa in base sei : ",x6);
    for (i=a;i>=0;i--)
    {
        printf ("%d ",v[i]);
    }
    }
    return v[10];
}
int oct (int x8)
{
    int r=0,d=1,v[10]={0},a=0,i,y,j,palindromo=1;
    r=x8%8;
    d=x8/8;
    v[0]=r;
    for (i=1;i<10 && d!=0;i++)
    {
        r=d%8;
        d=d/8;
        a++;
        v[i]=r;
    }

    for(y=0, j = a ;y<a/2 && palindromo == 1;y++, j--) {
            if ( v[y]!=v[j]) {
                palindromo = 0;
            }
    }
    if(palindromo == 1) {
        printf("\nPalindromo in base otto\n");
        printf("il numero %d decimale diventa in base otto : ",x8);
    for (i=a;i>=0;i--)
    {
        printf ("%d ",v[i]);
    }
    }
    return v[10];
}
