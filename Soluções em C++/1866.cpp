#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
    cin >> n;
    while(n--){
        cin >> k;
        if(k%2 == 0) cout << 0 << endl;
        else cout << 1 << endl;
    }

    return 0;
}