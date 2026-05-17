#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    unsigned long long int k;
    cin >> n;

    while(n--){
        cin >> k;

        long long j = (pow(2, k)-1)/12000;

        cout << j << " kg\n";
    }
}