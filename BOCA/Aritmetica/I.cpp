#include<bits/stdc++.h>
using namespace std;

int main(void){

    int N = 0;
    cin>>N;

    for(int i = 0; i<N;i++){
        int aux = 0;
        cin>>aux;
        int resto = 0, binario = 0, produto = 1, cont = 0;
        while(aux != 0){
            resto = aux%2;
            if(resto == 1) cout <<cont<<" ";
            binario = binario + (resto * produto);
            aux /=2;
            produto*=10;
            cont++;
        }
        cout<<endl;
    }


    return 0;
}

