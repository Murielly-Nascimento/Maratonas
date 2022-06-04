#include<bits/stdc++.h>
using namespace std;

int main(void){

    int N = 0;
    double total  = 0, media = 0;
    cin>>N;
    cin.ignore();
    vector<string>nome;
    for(int i = 0; i< N; i++){
        string str;
        getline(cin,str);

        int pos = str.find(":");
        pos++;

        string nota = str.substr(pos);
        pos--;
        string aluno = str.substr(0,pos);
        nome.push_back(aluno);

        media = atof(nota.c_str());
        total +=media;

    }

    for(int i = 0; i<N;i++){
        cout<<nome[i]<<endl;
    }
    cout << std::fixed;
    cout << std::setprecision(2);
    cout<<total/N<<endl;

    return 0;
}

