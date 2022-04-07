#include <stdio.h>
#include <math.h>

int main() {

double salario,novo,aumento;
scanf("%lf", &salario);
if(salario>=0 && salario<=400){
novo = ((salario*0.15)+salario);
aumento = novo-salario;
printf("Novo salario: %.2lf\n",novo);
printf("Reajuste ganho: %.2lf\n",aumento);
printf("Em percentual: 15 %%\n");
}
else if (salario>=400.01 && salario<=800){
novo = salario*0.12+salario;
aumento = novo-salario;
printf("Novo salario: %.2lf\n",novo);
printf("Reajuste ganho: %.2lf\n",aumento);
printf("Em percentual: 12 %%\n");
}
else if(salario>=800.01 && salario<=1200){
novo = salario*0.10+salario;
aumento = novo-salario;
printf("Novo salario: %.2lf\n",novo);
printf("Reajuste ganho: %.2lf\n",aumento);
printf("Em percentual: 10 %%\n");
}
else if(salario>=1200.01 && salario<=2000){
novo = salario*0.07+salario;
aumento = novo-salario;
printf("Novo salario: %.2lf\n",novo);
printf("Reajuste ganho: %.2lf\n",aumento);
printf("Em percentual: 7 %%\n");
} 
else if(salario>2000){
novo = (salario*0.04)+salario;
aumento = novo-salario;
printf("Novo salario: %.2lf\n",novo);
printf("Reajuste ganho: %.2lf\n",aumento);
printf("Em percentual: 4 %%\n");
}
return 0;
}