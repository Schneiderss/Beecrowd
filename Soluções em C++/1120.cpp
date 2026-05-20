#include <bits/stdc++.h>
using namespace std;

int main(){
    string j;
    char k;
    cin >> k >> j;
    while(!(k == '0') && !(j == "0")){
        bool isZero=false;
        while(j.find(k) != string::npos){
            j.erase(j.find(k), 1);
        }
        while(j.size() > 1 && j[0] == '0'){
            j.erase(0, 1);
        }
        if(j.empty()) cout << 0 << endl;
        else{
            cout << j << endl;
        }
        cin >> k >> j;
    }
    return 0;
}