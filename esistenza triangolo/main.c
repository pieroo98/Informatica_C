#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b, c, perimetro;
   float area ;
   printf ( " inserire le lunghezze dei lati di un triangolo a b c:");
   scanf ("%d %d %d", &a, &b, &c);
   if (( a < ( b + c)) && ( b< (a+c)) && ( c < (a + b)))
   {
        if ((a == b ) && ( a == c))
        {
           printf ( " il triangolo e' equilatero \n");
           perimetro = (3*a);
           area = (float)(a*a*(sqrt(3))/4);
           printf ( " il perimetro e' : %d \n", perimetro);
           printf ( " l'area e' : %f \n", area);
       }
        else if ( a ==sqrt( b*b + c*c))
        {
           printf ( " il triangolo e' rettangolo \n") ;
           perimetro = (a+b+c) ;
           printf ( " il perimetro e' : %d \n", perimetro);
           area = (float)((b*c)/2);
           printf (" l'area del triangolo rettangolo e' : %f \n", area);
        }
        else if ( b == sqrt( a*a +c*c))
        {
           printf ( " il triangolo e' rettangolo \n");
           perimetro = ( a+b+c );
           printf ( " il perimetro e' : %d \n", perimetro);
           area = (float)((a*c)/2);
           printf (" l'area del triangolo rettangolo e' : %f \n", area);
        }
        else if ( c == sqrt( a*a + b*b))
        {
            printf ( " il triangolo e' rettangolo \n");
           perimetro = ( a+b+c );
           printf ( " il perimetro e' : %d \n", perimetro);
           area = (float)((a*b)/2);
           printf (" l'area del triangolo rettangolo e' : %f \n", area);
        }
        else if (( a == b) || ( b ==c ) || ( c == a))
        {
            printf (" il triangolo e' isoscele \n");
            perimetro = ( a+b+c );
            printf ( "il perimetro e' : %d \n", perimetro);
            if ( a == b)
            {
                area = ( float)((c*(sqrt((a*a) - ((c*c)/4))))/2);
                printf ( " l'area del triangolo e' : %f \n", area);
            }
            else if ( b ==c )
            {
                area = ( float)((a*(sqrt((c*c) - ((a*a)/4))))/2);
                printf ( " l'area del triangolo e' : %f \n", area);
            }
            else
            {
                area = ( float)((b*(sqrt((c*c) - ((b*b)/4))))/2);
                printf ( " l'area del triangolo e' : %f \n", area);
            }
        }
        else
        {
            printf ( " il triangolo e' scaleno \n");
            perimetro = ( a+b+c );
           printf ( " il perimetro e' : %d \n", perimetro);
        }
   }
   else if (( a == b + c) || ( b == c + a ) || ( c == a + b ))
   {
       printf ( " e' un triangolo degenerato in una retta \n");
   }
   else
   {
       printf ( " non e' un triangolo \n");
   }
    return 0;
}
