#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n, k, menor, count=0, ind;
    cin >> n;
    while(n--){
        cin >> k;
        if(count == 0) menor = k;
        if(k < menor){
             menor = k;
            ind = count;
        }
        count ++;
    }
    
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", ind);
 
    return 0;
}