#include <stdio.h>
#include <math.h>
int main() {
double A,B,C,Perimetro,Area;
scanf("%lf %lf %lf", &A,&B,&C);
if (B-C<A && A<B+C && A-C<B && B<A+C && A-B<C && C<A+B){ Perimetro = A+B+C;                                         printf("Perimetro = %.1lf\n",Perimetro);   
}
else{
Area = (((A+B)*C)/2);
printf("Area = %.1lf\n",Area);
}
return 0;