#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[256];
    double b;
    double c;
    double TOTAL;

    scanf("%s", a);
    fflush(stdin);
    scanf("%lf", &b);
    scanf("%lf", &c);
    TOTAL = (c*0.15 + b);

    printf("TOTAL = R$ %.2lf\n", TOTAL);

    return 0;
}