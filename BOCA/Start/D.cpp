#include <bits/stdc++.h>
using namespace std;

int main(void){
    int jovem =0, adulta = 0, idosa = 0, N = 0,x;
    cin>>N;
    for(int i=0; i<N;i++){
        cin>>x;
        if(x == 1) adulta++;
        else if(x ==2){
            idosa++;
            jovem++;
        }
    }
    cout<<"Jovem: "<<jovem<<endl;
    cout<<"Adulta: "<<adulta<<endl;
    cout<<"Idosa: "<<idosa<<endl;
    return 0;
}
