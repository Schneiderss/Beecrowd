#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n != 0){

        long long maior = pow(2, 2*(n-1));

        int T = to_string(maior).size();

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                long long v = (1LL << (i+j));
                if(j == 0) cout << setw(T) << v;
                else cout << " " << setw(T) << v;
            }
            printf("\n");
        }
        printf("\n");

        cin >> n;
    }



    return 0;
}