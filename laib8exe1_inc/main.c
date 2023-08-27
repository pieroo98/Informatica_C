#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N 40
int main()
{
    int i,n1,n2,x=0,y=0,j,k=0,trovato=0;
    char s1[N]={'0'},s3[N]={'0'},s2[N]={'0'};
    printf("inserisci dei caratteri della prima stringa: ");
    scanf("%39s",s1);
    printf("\ninserisci dei caratteri della seconda stringa: ");
    scanf("%39s",s2);
    n1=strlen(s1);
    n2=strlen(s2);
    printf("\nla prima stringa e' lunga %d\n",n1);
    printf("la seconda stringa e' lunga %d\n",n2);
    for (i=0;i<n1;i++)
    {
        if (isalpha(s1[i]))
        {
            x++;
        }
        else if (isdigit(s1[i]))
        {
            y++;
        }
    }
    if (n1>n2)
    {
        for (i=0;i<n1-n2 && trovato==0;i++)
        {
            trovato=1;
            for (j=0;j<n2 && trovato==1;j++)
            {
                if (s1[i+j]!=s2[j])
                    {
                        trovato=0;
                        s3[k]=s1[i+j];
                    }
            }
        }
    if (trovato ==0 )
    {
        printf("la secondra stringa e' inclusa nella prima : ");
        for (k=0;k<n1-n2;k++)
        {
            printf("%s ",s3);
        }
    }
    if (trovato !=0 )
    {
        printf("\nhai sbagliato tutto\n");
    }
    }
    printf("i numeri sono %d mentre le lettere sono %d ",y,x);
    return 0;
}
