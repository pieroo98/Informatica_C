#include <stdio.h>
#include <stdlib.h>
#define N 8
#include <math.h>
#include <ctype.h>
int main()
{
    int x=0,i=0,a=0,v[N]={0},y=0,n=0,c,count,j,tmp2=0;
    char vettExa[N/4 +1],tmp[2];
    printf(" inserisci il numero in binario : \n");
    while (a!=N && n<2)
    {
        printf("%d : ",i+1);
        scanf("%d",&n);
        v[i]=n;
        i++;
        a++;
    }
    c=a-1;
    for (i=c;i>=0;i--)
    {
        x=x + v[i]*(int)round(pow(2,y));
        y++;
    }
    printf("in numero decimale e' : %d ",x);
    for(i=0, a=0 ;i<c ; i=i+4, a++)
    {
        for(j=i+3, count=0, x=0, y=0; j>=0 && count!=4; j--, count++, y++)
            x=x + v[j]*(int)round(pow(2,y));
        if(x==10)
            vettExa[a]='A';
        else if(x==11)
            vettExa[a]='B';
        else if(x==12)
            vettExa[a]='C';
        else if(x==13)
            vettExa[a]='D';
        else if(x==14)
            vettExa[a]='E';
        else if(x==15)
            vettExa[a]='F';
        else{
            sprintf(tmp,"%d",x);
            vettExa[a]=tmp[0];
        }
    }
    printf("\nil valore in EXA e' : 0x%s\n\n",vettExa);

    for (i=N/4-1, x=0, y=0;i>=0;i--, y++){
		if(isdigit(vettExa[i]))
			tmp2 = vettExa[i];
		else{
			if(vettExa[i] =='a' || vettExa[i]=='A')
				tmp2 = 10;
			else if(vettExa[i] =='b' || vettExa[i]=='B')
				tmp2 = 11;
			else if(vettExa[i] =='c' || vettExa[i]=='C')
				tmp2 = 12;
			else if(vettExa[i] =='d' || vettExa[i]=='D')
				tmp2 = 13;
			else if(vettExa[i] =='e' || vettExa[i]=='E')
				tmp2 = 14;
			else if(vettExa[i] =='f' || vettExa[i]=='F')
				tmp2 = 15;
		}
		x=x + tmp2*(int)round(pow(16,y));
	}
	printf("convertendo da EXA a DEC ottengo : %d",x);
    return 0;
}
