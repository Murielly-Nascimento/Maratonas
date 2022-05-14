#include<bits/stdc++.h>
using namespace std;

int main(void){

    string str, aux;
    int j = 0;

    while(true){
        cin>>str>>aux;
        int j = 0;
        for(int i = 0; i<aux.size(); i++){
            if(aux[i] == str[j]) j++;
        }
        if(j == str.size()) cout<<"sim"<<endl;
        else cout<<"nao"<<endl;


    }
    return 0;
}
