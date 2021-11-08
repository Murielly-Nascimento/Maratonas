#include <bits/stdc++.h> 
using namespace std;

int main(void){
    int N = 0;
    scanf("%d", &N);

    int aux = 0, numbers[N];
    
    for(int i = 1; i < N; i++){
        scanf("%d", &aux);
        numbers[aux] = 1;
    }

    for(int i = 1; i <= N; i++){
        if(numbers[i] != 1){
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}