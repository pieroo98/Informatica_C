#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0,flag=0,frase=0,max_frase=0;
    int max_frase1=0,cont=0,car_max=-1;
    char carat;
    FILE *fp;
    fp = fopen(argv[1],"r");
    if (fp== NULL)
    {
        printf("errore apertura file.\n");
        return -1;
    }
    if (argc!=2)
    {
        printf("errore argomenti.\n");
        return -2;
    }
    while ((carat=fgetc(fp))!=EOF)
    {
        if ((isalpha(carat)) && (flag==0))
        {
            if (carat == 'a') a++;
            if (carat == 'b') b++;
            if (carat == 'c') c++;
            if (carat == 'd') d++;
            if (carat == 'e') e++;
            if (carat == 'f') f++;
            if (carat == 'g') g++;
            if (carat == 'h') h++;
            if (carat == 'i') i++;
            if (carat == 'j') j++;
            if (carat == 'k') k++;
            if (carat == 'l') l++;
            if (carat == 'm') m++;
            if (carat == 'n') n++;
            if (carat == 'o') o++;
            if (carat == 'p') p++;
            if (carat == 'q') q++;
            if (carat == 'r') r++;
            if (carat == 's') s++;
            if (carat == 't') t++;
            if (carat == 'u') u++;
            if (carat == 'v') v++;
            if (carat == 'w') w++;
            if (carat == 'x') x++;
            if (carat == 'y') y++;
            if (carat == 'z') z++;
            flag=1;
        }
        if (isspace(carat))
        {
            flag=0;
        }
        if (ispunct(carat))
        {
            frase++;
            flag=0;
            if (frase==1)
            {
                max_frase1=max_frase;
            }
            if ((frase>1) && (max_frase>max_frase1))
            {
                max_frase1=max_frase;
                max_frase=0;
            }
            max_frase=0;

        }
        if ((isalpha(carat) || (isspace(carat))) || (ispunct(carat)))
        {
            if (isalpha(carat))
            {
                max_frase++;
            }
        }
    }
    fclose(fp);
    car_max=a;
    for (cont = 'a';cont<= 'z' ;cont++)
    {
        if ((cont)>car_max) car_max=cont;
    }
    printf(" a= %d b= %d c= %d d= %d e= %d f= %d g= %d h= %d i= %d j= %d k= %d l= %d\n m= %d n= %d o= %d p= %d q= %d r= %d s= %d t= %d u= %d v= %d w= %d x= %d y= %d z= %d",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z);
    printf("il numero di frasi e' : %d \n",frase);
    printf("lungheza max di frase : %d \n",max_frase1);
    printf("la lettera piu ripetuta come iniziale e' %c\n",car_max);
    return 0;
}
