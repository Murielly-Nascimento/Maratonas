#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
double A,B,C;
double TRIANGULO,CIRCULO,QUADRADO,TRAPEZIO,RETANGULO;
scanf("%lf %lf %lf", &A,&B,&C);
TRIANGULO = ((A*C)/2);
CIRCULO = (C*C*3.14159);
TRAPEZIO = (((A+B)*C)/2);
QUADRADO = (B*B);
RETANGULO = (A*B);
printf("TRIANGULO: %.3lf\n", TRIANGULO);
printf("CIRCULO: %.3lf\n", CIRCULO);
printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
printf("QUADRADO: %.3lf\n", QUADRADO);
printf("RETANGULO: %.3lf\n", RETANGULO);

return 0;
}
