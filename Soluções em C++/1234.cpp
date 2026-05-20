#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(getline(cin, s)){
        bool up=false;
        for(char &c : s){
            if(c == ' ') continue;
            else if(up){
                c = tolower(c);
                up = false;
            }
            else{
                c = toupper(c);
                up = true;
            }
        }
        cout << s << endl;
    }
    return 0;
}