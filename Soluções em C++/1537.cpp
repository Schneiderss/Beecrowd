#include <bits/stdc++.h>
using namespace std;

int fat (int a){
    if(a == 1) return 1;

    return a *= fat(a-1);
}

int main() {

    int n;
    cin >> n;
    while(n != 0){
        
        cout << fat(n-2) % 1000000009 << endl;
        cin >> n;
    }
 
    return 0;
}