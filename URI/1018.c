#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
int N,a,b,c,d,e,f,g,h,i,j,l,m,n;
if("0 < N < 1000000"){
scanf("%d", &N);
a = N/100;
b = N%100;
c = b/50;
d = b%50;
e = d/20;
f = d%20;
g = f/10;
h = f%10;
i = h/5;
j = h%5;
l = j/2;
m = j%2;
n = m/1;
printf("%d\n", N);
printf("%d nota(s) de R$ 100,00\n",a);
printf("%d nota(s) de R$ 50,00\n",c);
printf("%d nota(s) de R$ 20,00\n",e);
printf("%d nota(s) de R$ 10,00\n",g);
printf("%d nota(s) de R$ 5,00\n",i);
printf("%d nota(s) de R$ 2,00\n",l);
printf("%d nota(s) de R$ 1,00\n",n);
}
else{
  printf("error");
}
return 0;

}