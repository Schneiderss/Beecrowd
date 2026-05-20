#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
    int n;
    cin >> n;
    while(n--){
        string s, st;
        cin >> s >> st;

        if(st.size() > s.size()) cout << "nao encaixa" << endl;
        else if(s.substr(s.size() - st.size()) == st) cout << "encaixa" << endl;
        else cout << "nao encaixa" << endl;
    }
    return 0;
}