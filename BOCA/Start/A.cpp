#include <bits/stdc++.h>
using namespace std;

int main(void){
    int num;
    cin >> num;

    for(int i = 2; i <= num; i++){
        if(i%2!=0 and (i % 3 == 0)){
            cout << i << endl;
        }

    }
    return 0;
}
