#include<bits/stdc++.h>
using namespace std;

int main(void){

    double T = 0, U = 0;

    cin>>T>>U;

    cout << std::fixed;
    cout << std::setprecision(2);

    int Q = T/U;
    cout<<Q<<" "<<T-(Q*U)<<endl;

    return 0;
}
