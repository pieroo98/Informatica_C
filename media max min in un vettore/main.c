#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,max,min,v[10]={0};
    float s,m;
    m=0.0;
    s=0.0;
    max = -5686890;
    min = 38384583;
    for (i=0;i<10;i++)
    {
        printf("inserisci %d valori: ",i+1);
        scanf("%d",&v[i]);
        if ( v[i]>max) max = v[i];
        if (v[i]<min) min = v[i];
    }
    for( i=9;i>=0;i--)
    {
        printf("ecco i valori: %d\n",v[i]);
        s = s + v[i];
    }
    printf("Il massimo valore contenuto nel vettore e\' %d, in posizione ", max);
    for(i = 0; i <10; i++) {
    if(v[i] == max)
      printf("%d ", (i + 1));
    }
    printf("\nIl minimo valore contenuto nel vettore e\' %d, in posizione ", min);
    for(i = 0; i <10; i++) {
    if(v[i] == min)
      printf("%d ", (i + 1));
    }
    m=(s/10);
    printf("\nla media e': %.2f\n",m);
    printf("il massimo e': %d\n",max);
    printf("il minimo e': %d\n",min);
    return 0;
}
