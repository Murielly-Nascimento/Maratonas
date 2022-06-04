#include<bits/stdc++.h>
using namespace std;

int main(void){

    int A = 0;
    cin>>A;

    if(A < 10) cout<<"40"<<endl;
    else if(A >= 10 && A < 15) cout<<"60"<<endl;
    else if(A >= 15 && A < 20) cout<<"79"<<endl;
    else if(A >= 20 && A < 25) cout<<"97"<<endl;
    else if(A >= 25 && A < 30) cout<<"114"<<endl;
    else if(A >= 30 && A < 35) cout<<"130"<<endl;
    else if(A >= 35 && A < 40) cout<<"145"<<endl;
    else if(A >= 40 && A < 45) cout<<"159"<<endl;
    else if(A >= 45 && A < 50) cout<<"172"<<endl;

    return 0;
}
