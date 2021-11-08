#include <bits/stdc++.h> 
using namespace std;

int main(void){
    long long int N = 0;
    
    scanf("%lld", &N);
    printf("%lld ", N);

    while(N!=1){
        if(N % 2 == 0) N = N/2;
        else N = (N * 3) + 1;
        printf("%lld ", N);
    }
    printf("\n");

    return 0;
}