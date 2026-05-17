#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
    int count[4]={0, 0, 0, 0};
    cin >> n;
    while(n--){
        cin >> k;
        if(k%2 == 0) count[0]++;
        if(k%3 == 0) count[1]++;
        if(k%4 == 0) count[2]++;
        if(k%5 == 0) count[3]++;
    }

    cout << count[0] << " Multiplo(s) de 2\n";
    cout << count[1] << " Multiplo(s) de 3\n";
    cout << count[2] << " Multiplo(s) de 4\n";
    cout << count[3] << " Multiplo(s) de 5\n";


    return 0;
}