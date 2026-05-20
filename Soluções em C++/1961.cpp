#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, n;
    bool flag=true;
    cin >> p >> n;
    int v[n];
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    for(int i=0; i<n-1; i++){
        if(abs(v[i]-v[i+1]) > p) flag=false;
    }
    if(flag) cout << "YOU WIN";
    else cout << "GAME OVER";
    cout << endl;
    return 0;
}