#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    while(n != 0){

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int valor = min(min(i, j), min(n - 1 - i, n - 1 - j)) + 1;
                if(j == 0) printf("%3d", valor);
                else printf(" %3d", valor);
            }
            printf("\n");
        }
        printf("\n");

        cin >> n;
    }

    return 0;
}