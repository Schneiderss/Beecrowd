#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){

    int n;
    cin >> n;
    cin.ignore();
    string str;
    while(n--){
        getline(cin, str);

        for(int i=0; i<str.size(); i++){
            if(isalpha(str[i])) str[i] += 3;
        }
        reverse(str.begin(), str.end());
        for(int i=str.size()/2; i<str.size(); i++) str[i] -= 1;

        cout << str << endl;
    }

    return 0;
}