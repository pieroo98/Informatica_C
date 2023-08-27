#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct coordinate   {   int x;   int y;   };
int main(int argc, char *argv[])
{
    float v[6];
    int i;
    float dist=0,min=0;
    struct coordinate coordinata[4];
    printf("inserisci le coordinate : \n");
    for (i=0;i<4;i++)
    {
        printf("inserisci le x : ");
        scanf("%d",&coordinata[i].x);
        printf("inserisci le y : ");
        scanf("%d",&coordinata[i].y);
    }
    if (argc!=2)
    {
        printf("errore argc\n");
        return 1;
    }
    if ((strcmp(argv[1],"-m"))==0)
    {
        for (i=0;i<3;i++)
        {
            dist = dist + sqrt(pow(coordinata[i].x - coordinata[i+1].x, 2) + pow(coordinata[i].y - coordinata[i+1].y, 2));
        }
        printf("la distanza dei 4 punti e' %.2f\n",dist);
    }
    if ((strcmp(argv[1],"-a"))==0)
    {
        v[0]=sqrt(pow(coordinata[0].x - coordinata[1].x, 2) + pow(coordinata[0].y - coordinata[1].y, 2));
        v[1]=sqrt(pow(coordinata[0].x - coordinata[2].x, 2) + pow(coordinata[0].y - coordinata[2].y, 2));
        v[2]=sqrt(pow(coordinata[0].x - coordinata[3].x, 2) + pow(coordinata[0].y - coordinata[3].y, 2));
        v[3]=sqrt(pow(coordinata[1].x - coordinata[2].x, 2) + pow(coordinata[1].y - coordinata[2].y, 2));
        v[4]=sqrt(pow(coordinata[1].x - coordinata[3].x, 2) + pow(coordinata[1].y - coordinata[3].y, 2));
        v[5]=sqrt(pow(coordinata[2].x - coordinata[3].x, 2) + pow(coordinata[2].y - coordinata[3].y, 2));
        min=v[0];
        for (i=0;i<6;i++)
        {
            if (v[i]<min)
            {
                min=v[i];
            }
            printf("%f\n",v[i]);
        }
        printf("la distanza minima e' %f \n",min);
    }
    return 0;
}
