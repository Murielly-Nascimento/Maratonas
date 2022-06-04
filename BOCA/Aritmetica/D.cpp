#include<bits/stdc++.h>
using namespace std;

int main(void){

    int Q = 0, soma = 0;
    cin>>Q;
    for(int i = 0; i< Q; i++){
        int aux = 0;
        cin>>aux;
        soma+=aux;
    }
    soma-=9;
    if(soma <= 0) cout<<"0"<<endl;
    else cout<<soma<<endl;

    return 0;
}
