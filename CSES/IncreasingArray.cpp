#include <bits/stdc++.h> 
using namespace std;

int main(void){
    int N = 0;
    long long int aux = 0, aux2 = 0, moves = 0;
    scanf("%d", &N);
    
    vector<long long int>numbers;
    scanf("%lld", &aux);
    aux2 = aux;

    for(int i = 1; i < N; i++){
        scanf("%lld", &aux);
        if(aux < aux2){
            moves += aux2 - aux; 
            aux += aux2 - aux;
        }
        aux2 = aux;
    }
    printf("%lld\n", moves);
    return 0;
}