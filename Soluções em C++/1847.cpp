#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a < b){
        if(b >= c) cout << ":(";
        else if((b-a) > (c-b)) cout << ":(";
        else cout << ":)";
    }
    else if(a > b){
        if(b <= c) cout << ":)";
        else if((a-b) > (b-c)) cout << ":)";
        else cout << ":(";
    }else{
        if(b < c) cout << ":)";
        else cout << ":(";
    }
    cout << endl;
    return 0;
}