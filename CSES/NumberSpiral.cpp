#include <bits/stdc++.h> 
using namespace std;

int main(void){
    long long int N = 0, X = 0, Y = 0;
    scanf("%lld", &N);

    for(int i = 0; i < N; i++){
        scanf("%lld %lld", &Y, &X);
        if(X > Y){
            if(X % 2 == 1){
                printf("%lld\n", (X*X - Y + 1));
            }else{
                X--;
                printf("%lld\n", (X*X + Y));
            }
        }else{
            if(Y % 2 == 0){
                printf("%lld\n", (Y*Y - X + 1));
            }else{
                Y--;
                printf("%lld\n", (Y*Y + X));
            }
        }
    }
    return 0;
}