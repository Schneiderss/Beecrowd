#include <bits/stdc++.h>
using namespace std;

int main(){
    int l, c;
    cin >> l >> c;
    if(c%2 == 1){
        if(l%2 == 0) cout << 0;
        else cout << 1;
    }else{
        if(l%2 == 0) cout << 1;
        else cout << 0;
    }
    cout << endl;
    return 0;
}