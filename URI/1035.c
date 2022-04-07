#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;double c;
    int d, f;double e;
    double total;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%lf", &c);
    scanf("%d", &d);
    scanf("%d", &f);
    scanf("%lf", &e);
    total = ((b*c) + (f*e));
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}