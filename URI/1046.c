#include <stdio.h>
#include <math.h>
int main() {
int A,B,tempo;
scanf("%d %d",&A,&B);
if (A==B){
printf("O JOGO DUROU 24 HORA(S)\n");
}
else if (A<B){
tempo = (B - A);
printf("O JOGO DUROU %d HORA(S)\n",tempo);
}
else{
tempo = ((24-A)+B);
printf("O JOGO DUROU %d HORA(S)\n",tempo);
}

return 0;
}