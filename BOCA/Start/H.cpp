#include <bits/stdc++.h>
using namespace std;


int main(void){
    int N = 0,maior=-1, nota = 0;
    string nome;
    vector<string>respostas;

    cin>>N;

    for(int i = 0;i<N; i++){
        cin>>nome>>nota;
        if(nota>maior){
            respostas.clear();
            maior = nota;
            respostas.push_back(nome);
        }
        else if(nota == maior){
            respostas.push_back(nome);
        }
    }
    sort(respostas.begin(), respostas.end());

    for(int i = 0; i< respostas.size(); i++)
        cout<<"Aluno: "<<respostas[i]<<" Nota: "<<maior<<endl;
    return 0;
}
