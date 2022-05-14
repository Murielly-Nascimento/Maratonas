#include<bits/stdc++.h>
using namespace std;

int main(void){

    int N = 0, D = 0;

    while(true){
        scanf("%d %d",&N,&D);
        if(N == 0 && D ==0) break;

        int value = ceil(N/D);

        if(value <= 6) cout<<"Poodle"<<endl;
        else if(value > 20) cout<<"Poooooooooooooooodle"<<endl;
        else{
            cout<<"P";
            for(int i = 0; i<= (value-4); i++){
                cout<<"o";
            }
            cout<<"dle"<<endl;
        }
    }




    return 0;
}
