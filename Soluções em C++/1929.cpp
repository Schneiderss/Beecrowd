#include <bits/stdc++.h>
using namespace std;

bool triang(int a, int b, int c){
    return (a+b>c && a+c>b && b+c>a);
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(triang(a, b, c) || triang(a, b, d)
        || triang(a, c, d) || triang(b, c, d)) cout << "S";
    else cout << "N";
    cout << endl;
    return 0;
}