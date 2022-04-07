#include <stdio.h>
#include <math.h>

int main(){
int N[1000],T,i,x=0;
scanf("%d",&T);
for(i=0;i<1000;i++,x++){
printf("N[%d] = %d\n",i,x);
if(x>=T-1){
x= -1;
}
}
return 0;
}