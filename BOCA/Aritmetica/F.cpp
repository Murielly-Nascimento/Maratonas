#include<bits/stdc++.h>
using namespace std;

int main(void){

    int N = 0;
    cin>>N;
    if(N==5)cout<<1<<endl;
    else{
        int res = (N/5)*2 - 2;
        cout<<res<<endl;
    }


    return 0;
}

