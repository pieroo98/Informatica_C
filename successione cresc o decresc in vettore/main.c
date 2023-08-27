#include <stdio.h>
#include <stdlib.h>
#define n 10
int main()
{
    int v[n],i,a,b,c;
    for (i=0;i<n;i++)
    {
        printf("inserisci un valore %d: ",i+1);
        scanf("%d",&v[i]);
    }
     for(i=0;i<n;i++) {
        a=v[i];
        b=v[i+1];
        c=v[i+2];
    if((b==1+a)&&(c==1+b)) {
      printf("La sequenza numerica crescente e' %d %d %d ed inizia in posizione %d\n",v[i],v[i+1],v[i+2],i+1);
        }
    else if ((a==b+1)&&(b==c+1)) {
        printf("La sequenza numerica decrescente e' %d %d %d ed inizia in posizione %d\n",v[i],v[i+1],v[i+2],i+1);
        }
    }
    return 0;
}
