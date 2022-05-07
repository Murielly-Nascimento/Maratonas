#include <bits/stdc++.h>
using namespace std;

int main(void){
    string palavra, anagrama;

    cin >> palavra;
    cin >> anagrama;

    sort(palavra.begin(),palavra.end());
    sort(anagrama.begin(),anagrama.end());

    if(palavra.compare(anagrama)==0) cout << "achei um anagrama"<<endl;

    else cout << "me enganei nao eh um anagrama"<<endl;
    return 0;
}
