#include <stdio.h>
#include <stdlib.h>
#define N 18
int main()
{
    //int v[N]={0},i,x,d=1,r=0,a=0;
    int *v,i,d,r,dec,k;
    printf ("inserisci un valore :");
    scanf ("%d",&dec);
    /*scanf ("%d",&x);
    r=x%2;
    d=x/2;
    v[0]=r;
    for (i=1;i<N && d!=0;i++)
    {
        r=d%2;
        d=d/2;
        a++;
        v[i]=r;
    }
    printf("il numero %d decimale diventa in binario : ",x);
    for (i=a;i>=0;i--)
    {
        printf ("%d ",v[i]);
    }*/



	v = (int *)calloc(sizeof(int),32);
	r=dec%2;
	d=dec/2;
	//salvo i bit partendo dalla posizione 31 e salendo fino a 0, così sono gia ordinati i bit
	v[31]=r;
	for (i=30;i>=0 && d!=0;i--)
	{
			r=d%2;
			d=d/2;
			v[i]=r;
	}
	printf("\n\n");
	for(i=0;i<31;i++)
        printf("%d",v[i]);
    printf("\n\n");
	for(i=0, d=32;i<31;d-- ){
		if(v[i]==0){
			for(r=i+1;r<d;r++){
				v[r-1] = v[r];
			}
			for(k=r;k<32;k++)
                v[k]=0;
		}
		else
			break;
	}
	for(i=0;i<31;i++)
        printf("%d",v[i]);
    return 0;
}
