#include <bits/stdc++.h> 
using namespace std;
 
int main(void){
    long long int N = 0;
    string odd;

    scanf("%lld", &N);

    if(N == 1){
        printf("1\n");
        return 0;
    }

    if(N == 2 || N == 3){
        printf("NO SOLUTION\n");
        return 0;
    }

    for(long long int i = 1; i <= N; i++){
        if(i % 2 == 0) printf("%lld ",i);
        else{
            odd += to_string(i) + " ";
        }
    }
    cout<<odd<<endl;

    return 0;
}