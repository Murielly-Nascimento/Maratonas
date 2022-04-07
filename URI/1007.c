#include <stdio.h>
#include <stdlib.h>

int main()
{
int A;
int B;
int C;
int D;
int DIFERENCA;

scanf("%d", &A);
scanf("%d", &B);
scanf("%d", &C);
scanf("%d", &D);
DIFERENCA = (A*B-C*D);  
printf("DIFERENCA = %d\n", DIFERENCA);

return 0;
}