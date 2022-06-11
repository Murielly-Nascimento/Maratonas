#include<bits/stdc++.h>
using namespace std;

int main(void){

    long long int N = 0, C = 0;
    long long int melhor = pow(26,3) + pow(10,4);

    while(cin>>N>>C){
        long long int resp = pow(26,N) + pow(10,C);
        cout<<melhor<<endl;
        cout<<resp<<endl;
        if(melhor > resp){
            cout<<"A nova codificacao eh pior!"<<endl;
        }
        else if(melhor < resp){
            cout<<"A nova codificacao eh melhor!"<<endl;
        }
        else cout<<"A nova codificacao eh igual!"<<endl;



    };

    return 0;
}
