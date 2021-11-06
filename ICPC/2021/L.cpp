#include <bits/stdc++.h> 
using namespace std;

int main(void){
    int N = 0, M = 0;
    scanf("%d %d", &N, &M);
    
    string str;
    cin >> str;

    int l = 0, r = 0, possibilidades = 0;

    for(int i = 0; i < M; i++){
        scanf("%d %d", &l, &r);
        
        r--;
        l--;
        
        while(true){
            if(r == l) break;

            if(str[r] == '?' && str[l] == '?'){
                
                str[l] = '2'; 
                str[r] = '2';

                possibilidades+=2;
            }
            else if((str[r] <= '1') && (str[l] <= '1')){
                printf("0\n");
                return 0;
            }
            else if((str[r] < '?') || (str[l] < '?')){

                str[l] = min(str[r], str[l]);
                str[r] = min(str[r], str[l]);
            }


            
            l++;
            r--;

        }
        
    
    }
    
    for(int i = 0; i< str.size(); i++){
        if(str[i] == '?') possibilidades +=2;
    }

    cout<< possibilidades << endl;


    return 0;
}

