#include <stdio.h>
#include <stdlib.h>

int main()
{
double A;
double B;
double MEDIA;

scanf("%lf", &A);
scanf("%lf", &B);
MEDIA = (3.5*A+7.5*B)/11;  

printf("MEDIA = %.5lf\n", MEDIA);

return 0;
}