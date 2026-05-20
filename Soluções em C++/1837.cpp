#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    long long q = a / b;
    long long r = a % b;
    if(r < 0){
        r += (b > 0 ? b : -b);
        q = (a - r) / b;
    }
    cout << q << " " << r << endl;
    return 0;
}