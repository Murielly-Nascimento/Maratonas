#include <stdio.h>

int main() 
{
int codigo,quantidade;
double Total;
scanf("%d",&codigo);
scanf("%d",&quantidade);
if (codigo==1){
  Total = (quantidade*4);
  printf("Total: R$ %.2lf\n",Total);
}
else if (codigo==2){
  Total = quantidade*4.50;
  printf("Total: R$ %.2lf\n",Total);
}
else if (codigo==3){
  Total = (quantidade*5);
  printf("Total: R$ %.2lf\n", Total);
}
else if (codigo==4){
  Total = (quantidade*2);
  printf("Total: R$ %.2lf\n", Total);
}
else if (codigo==5){
  Total = quantidade*1.5;
  printf("Total: R$ %.2lf\n", Total);
}
return 0;
}