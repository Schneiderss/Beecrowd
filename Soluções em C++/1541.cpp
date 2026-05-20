#include <bits/stdc++.h>
using namespace std;

int main(){
    float a, b, c;
    while (cin >> a && a != 0){
        cin >> b >> c;
        float k = sqrt((a*b*100)/c);
        cout << floor(k) << endl;
    }
    return 0;
}