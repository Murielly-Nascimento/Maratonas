#include <stdio.h>

int main()
{
int N;
int minutos,horas,segundos;
scanf("%d",&N);
minutos = N%3600/60;
segundos = N%60;
horas = N/3600;
printf("%d:%d:%d\n",horas,minutos,segundos);
return 0;
}