#include<bits/stdc++.h>
using namespace std;

int main(void){

    int N = 0;
    cin>>N;
    for(int i = 0; i<N;i++){
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        reverse(str.begin(),str.end());
        cout<<str<<endl;
    }

    return 0;
}
