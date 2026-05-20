#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i=0; i<n; i++) cin >> v[i];
    int menor = v[0], k=1;
    for(int i=0; i<n; i++){
        if(v[i] < menor){
            k = i+1;
            menor = v[i];
        }
    }

    cout << k << endl;

    return 0;
}