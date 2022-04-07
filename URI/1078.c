#include <stdio.h>
#include <math.h>
int main()
{
double a,N,c;
scanf("%lf",&N);
for(a=1;a<=10;a++){
if(N>2 && N<1000)
c=a*N;
printf("%.0lf x %.0lf = %.0lf\n",a,N,c);
}
return 0;
}