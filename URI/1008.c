#include <stdio.h>

int main(void) {
  int a;
  int b;
  float c;
  float SALARY;

   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%f", &c);
   SALARY = b*c;

   printf("NUMBER = %d\n", a);
   printf("SALARY = U$ %.2f\n", SALARY);



  return 0;
}