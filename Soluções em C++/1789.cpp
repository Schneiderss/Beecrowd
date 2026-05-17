#include <bits/stdc++.h>
using namespace std;

int main(){

    int l;
    while(cin >> l){
        int v[l];
        for(int i=0; i<l; i++) cin >> v[i];

        sort(v, v+l, greater<int>());

        if(v[0]>=20) cout << 3 << endl;
        else if(v[0]<10) cout << 1 << endl;
        else cout << 2 << endl;
    }


    return 0;
}