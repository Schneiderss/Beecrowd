#include <bits/stdc++.h>
using namespace std;

int main(){
    int s, t, f;
    cin >> s >> t >> f;
    if(s+t > 23){
        s = abs((24-s)-t);
        if(s+f<0){
            s = 24-abs(s+f);
            cout << s << endl;
        }else cout << s+f << endl;
    }
    else{
        s += t;
        if(s+f<0){
            s = 24+s+f;
            cout << s << endl;
        }else cout << s+f << endl;
    }
    return 0;
}