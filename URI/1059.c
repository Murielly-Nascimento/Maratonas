#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=1;
    while(N<=100){
    if(N%2==0){
    printf("%d\n",N);
    }
    N = N+1;
    }
    return 0;
}