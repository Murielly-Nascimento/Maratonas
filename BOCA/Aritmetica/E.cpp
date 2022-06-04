#include<bits/stdc++.h>
using namespace std;

int main(void){

    string N, reverte, resposta;
    cin>>N;

    for(int i = 0; i < 4 ;i++){
        reverte = N;

        reverse(reverte.begin(),reverte.end());

        long int num = atoi(N.c_str());
        long int contrario = atoi(reverte.c_str());
        long int resultado = contrario + num;

        stringstream ss;
        ss << resultado;
        ss >> resposta;

        reverte = resposta;
        reverse(reverte.begin(),reverte.end());
        if(resposta == reverte){
            cout<<resultado<< endl;
            return 0;
        }
        N = resposta;
    }

    cout<<"Nao foi possivel encontrar um numero capicua com 4 iteracoes!"<<endl;
    return 0;
}

