#include<bits/stdc++.h>
using namespace std;

void bin(int N){
    string str;

    do{
        int aux = N%2;

        stringstream ss;
        ss << aux;
        string temp = ss.str();
        str = str.append(temp);

        N = N/2;
    }while(N != 0);
    reverse(str.begin(), str.end());
    cout<<str<<" bin"<<endl;
}

string letras(int N){
    switch(N){
        case 10:
            return "a";
        case 11:
            return "b";
        case 12:
            return "c";
        case 13:
            return "d";
        case 14:
            return "e";
        case 15:
            return "f";
    }
}

int numeros(char letra){
    switch(letra){
        case 'a':
            return 10;
        case 'b':
            return 11;
        case 'c':
            return 12;
        case 'd':
            return 13;
        case 'e':
            return 14;
        case 'f':
            return 15;
        default:
            return (letra - '0');

    }
}

void hexa(int N){
    string str;

    while(N != 0){
        int aux = N%16;

        string temp;

        if(aux >= 10){
            temp = letras(aux);
        }else{
            stringstream ss;
            ss << aux;
            temp = ss.str();
        }
        str = str.append(temp);

        N = N/16;
    }
    reverse(str.begin(), str.end());
    cout<<str<<" hex"<<endl;
}

int bin_to_dec(string num){
    string str = num;
    reverse(str.begin(), str.end());
    int resposta = 0;
    int aux = 0;
    for(int i = 0; i< str.size(); i++){
        aux = str[i] - '0';
        resposta += pow(2,i) * aux;
    }
    cout<<resposta<<" dec"<<endl;
    return resposta;
}

int hex_to_dec(string num){
    string str = num;
    reverse(str.begin(), str.end());
    int resposta = 0;
    int aux = 0;
    for(int i = 0; i< str.size(); i++){
        aux = numeros(str[i]);
        resposta += pow(16,i) * aux;
    }
    cout<<resposta<<" dec"<<endl;
    return resposta;
}

void dec(string num, string descricao){
    if(descricao == "dec"){
        int decimal = 0;
        sscanf(num.c_str(), "%d", &decimal);
        hexa(decimal);
        bin(decimal);
    }
    else if(descricao == "bin"){
        int decimal = bin_to_dec(num);
        hexa(decimal);
    }
    else if(descricao == "hex"){
        int decimal = hex_to_dec(num);
        bin(decimal);
    }

}


int main(void){

    int N;
    cin>>N;
    for(int i = 0; i< N; i++){
        string num;
        string descricao;
        cin>>num>>descricao;
        cout<<"Case "<<(i+1)<<":"<<endl;
        dec(num, descricao);
        cout<<endl;
    }



    return 0;
}
