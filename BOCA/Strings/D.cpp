#include<bits/stdc++.h>
using namespace std;

int main(void){

    int N = 0;
    string str, ord;
    bool teste = false;
    cin>>N;
    for(int i = 0; i<N;i++){
        cin>>str;
        for(int i = 1; i<str.size(); i++){
            char a = tolower(str[i-1]);
            char b = tolower(str[i]);
            if(a >= b){
                teste = true;
                break;
            }
        }
        if(teste) cout<<str<<": N"<<endl;
        else cout<<str<<": O"<<endl;
        teste = false;
    }




    return 0;
}
