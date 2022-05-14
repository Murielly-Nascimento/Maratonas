#include<bits/stdc++.h>
using namespace std;

int main(void){

    string cor;

    cin>>cor;

    if((cor.compare("amarela") == 0) || (cor.compare("vermelha")==0) || (cor.compare("azul")==0)){
        cout<<"primaria"<<endl;
    }
    else if((cor.compare("laranja") == 0) || (cor.compare("verde")==0) || (cor.compare("roxa")==0)){
       cout<<"secundaria"<<endl;
    }
    else cout<<"outra"<<endl;


    return 0;
}
