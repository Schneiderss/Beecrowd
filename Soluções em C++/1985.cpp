#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, qte;
    float price=0;
    cin >> n;
    while(n--){
        cin >> k >> qte;
        price += qte*(k%1000+0.5);
    }

    printf("%.2f\n", price);

    return 0;
}