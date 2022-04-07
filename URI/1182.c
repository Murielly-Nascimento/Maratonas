#include <stdio.h>
#include <math.h>
int main()
{
int L,i,j;
char T;
double M[12][12],soma=0.0;
scanf("%d %c",&L,&T);
for(i=0;i<12;i++){
for(j=0;j<12;j++){
scanf("%lf",&M[i][j]);
}
}
for(i=0;i<12;i++){
soma+=M[i][L];
}
if(T=='S'){
printf("%.1lf\n",soma);}
else if(T=='M'){
printf("%.1lf\n",soma/12.0);
}
return 0;
}