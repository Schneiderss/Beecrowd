#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, x;
    string s;
    cin >> n;
    while(n--){
        cin >> s >> x;

        for(int i=0; i<s.size(); i++){
            if(s[i] - x < 65) s[i] += 26 - x;
            else s[i] -= x;
        }
        cout << s << endl;
    }


    return 0;
}