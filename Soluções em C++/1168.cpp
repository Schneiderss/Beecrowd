#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, leds=0, c;
    string str;
    cin >> n;
    while(n--){
        cin >> str;
        c = count(str.begin(), str.end(), '1');
        leds += c*2;
        c = count(str.begin(), str.end(), '2');
        c += count(str.begin(), str.end(), '3');
        c += count(str.begin(), str.end(), '5');
        leds += c*5;
        c = count(str.begin(), str.end(), '4');
        leds += c*4;
        c = count(str.begin(), str.end(), '6');
        c += count(str.begin(), str.end(), '9');
        c += count(str.begin(), str.end(), '0');
        leds += c*6;
        c = count(str.begin(), str.end(), '7');
        leds += c*3;
        c = count(str.begin(), str.end(), '8');
        leds += c*7;

        cout << leds << " leds\n";
        leds = 0;
    }

    return 0;
}