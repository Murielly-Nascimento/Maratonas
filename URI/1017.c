#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
double t,v,distancia,litros;
scanf("%lf %lf",&t,&v);
distancia = v*t;
litros = distancia/12;
printf("%.3lf\n", litros); 
return 0;
}