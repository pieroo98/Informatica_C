#include <stdio.h>
#include <stdlib.h>
#define N 2
int main()
{
    int i,j, palindromo;
    int v[N]={0};
    for(i=0;i<N;i++)
    {
        printf("inserisci i valori: ");
        scanf("%d",&v[i]);
    }
    palindromo = 1;
    for(i=0, j = N-1 ;i<N/2 && palindromo == 1;i++, j--) {
            if ( v[i]!=v[j]) {
                palindromo = 0;
            }
    }
    if(palindromo == 1) {
        printf("Palindromo\n");
    } else {
        printf("Non palindromo\n");
    }
    return 0;
}
