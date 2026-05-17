#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long n, m;

    while(cin >> n >> m){
        cout << ((n >= m) ? n-m : m-n) << endl;
    }

    return 0;
}