#include<bits/stdc++.h>
using namespace std;

long long int fat(long long int N){
    if(N <= 1) return 1;
    else return fat(N-1)*N;
}

int main(void){

    int N = 0;
    cin>>N;
    for(int i = 0; i<N;i++){
        int aux = 0;
        cin>>aux;

        long long int resposta = fat(aux)/fat(aux-3);
        cout<<resposta<<endl;
    }

    return 0;
}
