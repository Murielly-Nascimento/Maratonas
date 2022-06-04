#include<bits/stdc++.h>
using namespace std;

int main(void){

    int T1, T2, P;
    cin>>T1>>T2>>P;

    T1*=10;
    T2*=10;

    if(P == 1){
        T1 +=150;
    }else{
        T2 +=150;
    }

    if(T1 > T2) cout<<T1<<" x "<<T2<<endl<<"Ganhador: Time1!"<<endl;
    else if(T1 < T2) cout<<T1<<" x "<<T2<<endl<<"Ganhador: Time2!"<<endl;
    else cout<<T1<<" x "<<T2<<endl<<"Nao houve campeao!"<<endl;

    return 0;
}
