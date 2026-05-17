#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, mini;
    string s, r;
    cin >> n;
    while(n--){
        cin >> s >> r;
        string f="";

        mini = min(s.size(), r.size());

        for(int i=0; i<mini; i++){
                f += s[i];
                f += r[i];
        }

        if(s.size() == mini) f += r.substr(mini);
        else f += s.substr(mini);

        cout << f << endl;
    }

    return 0;
}