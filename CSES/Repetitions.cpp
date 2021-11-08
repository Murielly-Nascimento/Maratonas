#include <bits/stdc++.h> 
using namespace std;

int main(void){
    string DNA;
    cin>>DNA;

    int aux = 1;
    set<int>repetitions;

    for(int i =0; i< DNA.size(); i++){
        if(DNA[i+1] == DNA[i]) aux++;
        else{
            repetitions.insert(aux);
            aux = 1;
        }
    }
    set<int>::iterator it = repetitions.end();
    it--;
    printf("%d\n",*it);

    return 0;
}