#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
int X;
double Y,consumo;
scanf("%d", &X);
scanf("%lf",&Y);
consumo = X/Y;
printf("%.3lf km/l\n", consumo);


return 0;
}