#include<bits/stdc++.h>
using namespace std;

int main(void){

    string str1, str2, acabou = "acabou";
    string caracter;
    while(str1!=acabou && str2!=acabou){
        cin>>str1>>str2;
        for(int i = 0; i<str1.size(); i++){
            char temp = str1[i];
            int found = str2.find(temp);
            if(found != string::npos){
                caracter.push_back(str1[i]);
            }
        }
        sort(caracter.begin(),caracter.end());
        cout<<caracter<<endl;
    }


    return 0;
}
