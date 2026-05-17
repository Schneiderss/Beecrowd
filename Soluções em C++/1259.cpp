#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
    cin >> n;
    int j=n;
    vector<int> par, impar;
    while(n--){
        cin >> k;
        if(k%2 == 0) par.push_back(k);
        else impar.push_back(k);
    }

    sort(impar.begin(), impar.end());
    sort(par.begin(), par.end(), greater<int>());

    for(int i=0; i<j; i++){
        if(!par.empty()){
            cout << par.back() << endl;
            par.pop_back();
        }
        else if(!impar.empty()){
            cout << impar.back() << endl;
            impar.pop_back();
        }
    }

    return 0;
}