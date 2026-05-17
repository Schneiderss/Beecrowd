#include <bits/stdc++.h>
using namespace std;

int main(){

    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    while(h1!=0 && m1!=0 && h2!=0 && m2!=0){
        h1 = h1*60+m1;
        h2 = h2*60+m2;
        
        cout << ((h2<h1) ? 24*60-h1+h2 : h2-h1) << endl;

        cin >> h1 >> m1 >> h2 >> m2;
    }

    return 0;
}