#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, x1, x2, d;
    do {
    printf ( " a, b e c : ", a, b, c ) ;
    scanf ( "%f %f %f", &a, &b, &c);
    d = (sqrt(b*b-4*a*c)) ;
    if (a!=0)
    {if (d > 0){
        x1 = ((-b+d)/2*a) ;
        x2 = ((-b-d)/2*a) ;
        printf ( " il risultato dell'equazione e' x1 : %f , x2 : %f \n", x1, x2 ) ;
    }
    else if ( d < 0 ) {
        printf ( " l' equazione e' impossibile\n");
    }
    else
    {
        x1 = ( -b/2*a);
        x2 = x1 ;
        printf("i valori sono x1 : %f e x2 : %f\n", x1, x2);
    }
    }
    else
    {
        x1 = (-c/b);
        printf("il risultato e' :%f\n", x1);
    }
    }
    while ((a!=0)|| (b!=0) || (c!=0));
    return 0;
}
