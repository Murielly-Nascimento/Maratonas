#include<bits/stdc++.h>
using namespace std;

unsigned long long int fatorial(unsigned long long int N){
    if(N <=1) return 1;
    return N * fatorial(N-1);
}


int main(void){

    int Casas = 0;
    cin>>Casas;

    for(int i = 0; i<Casas; i++){
        unsigned long long int aux = 0;
        cin>>aux;
        cout<<fatorial(aux)<<endl;
    }


    return 0;
}

