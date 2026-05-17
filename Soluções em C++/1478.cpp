#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n != 0){

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int k = abs(i-j);
                if(j == 0) printf("%3d", k+1);
                else printf(" %3d", k+1);
            }
            cout << endl;
        }
        cout << endl;
        cin >> n;
    }

    return 0;
}
