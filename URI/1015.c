#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
double x1,y1;
double x2,y2;
double distancia;
scanf("%lf", &x1);
scanf("%lf", &y1);
scanf("%lf", &x2);
scanf("%lf", &y2);
distancia = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("%.4lf\n", distancia);
return 0;
}