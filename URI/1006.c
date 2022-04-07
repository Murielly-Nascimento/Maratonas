#include <stdio.h>
#include <stdlib.h>

int main()
{
double A;
double B;
double C;
double MEDIA;

scanf("%lf", &A);
scanf("%lf", &B);
scanf("%lf", &C);
MEDIA = (2*A+3*B+5*C)/10;  

printf("MEDIA = %.1lf\n", MEDIA);

return 0;
}