#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a=1,b=2,c=3,k=1;
    while (c>=0)
    {

        if (c==sqrt(b*b + a*a))
        {
            printf("la serie %d %d %d e' una terna pitagorica\n",a,b,c);
            break;
        }
        a++;
        b++;
        c++;
    }
    while (c>=0)
    {
        k++;
        a=a*k;
        b=b*k;
        c=c*k;
        if (c==sqrt(b*b + a*a))
        {
            printf("la serie %d %d %d e' una terna pitagorica\n",a,b,c);
        }
    }
    return 0;
}
