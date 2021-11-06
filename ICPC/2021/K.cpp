#include <bits/stdc++.h> 
using namespace std;

int main(void){
    int T = 0, D = 0, M = 0, aux = 0, aux2 = 0;
    bool dormiu = false;

    scanf("%d %d %d", &T, &D, &M);

    for(int i = 0; i < M; i++){
        scanf("%d", &aux);
        if(aux - aux2 >= T) dormiu = true;
        aux2 = aux;
    }

    if((D - aux >= T) || (M == 0)) dormiu = true;

    if(dormiu) printf("Y\n");
    else printf("N\n");

    return 0;
}