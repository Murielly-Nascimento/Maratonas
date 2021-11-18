/*
*   This site : https://www.codespeedy.com/the-two-knights-problem-implemented-in-c/
*   gives a throught explanation of how to calculate the ways a kngiht can be placed on a chess board
*
*/

#include <bits/stdc++.h> 
using namespace std;

long long int calculator(int n){
    long long int knight1 = 0, knight2 = 0, ways = 0, placesAttacked = 0, result = 0; 
    knight1 = n*n;
    knight2 = n*n-1;
    ways = (knight1 * knight2)/2 ;
    placesAttacked = 4*(n-1)*(n-2);
    result = ways - placesAttacked;

    return result;

}

int main(void){
    int K = 0;
    scanf("%d", &K);

    for(int i = 1;i <= K;i++){
        printf("%lld\n", calculator(i));
    }


    return 0;
}