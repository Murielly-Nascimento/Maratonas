#include<bits/stdc++.h>
using namespace std;

int main(void){

    int N = 0;

    cin>>N;
    for(int i = 0; i<N;i++){
        int numeros[10] = {0};
        int resp = 6;
        for(int j = 0; j < 6; j++){
            int aux = 0;
            cin>>aux;
            numeros[aux]++;
            if(numeros[aux] > 1) resp--;
        }

        int answer = 1;
        for(int i = 0; i < 4; i++){
            answer*=resp;
            resp--;
        }
        cout<<answer<<endl;
    }


    return 0;
}
