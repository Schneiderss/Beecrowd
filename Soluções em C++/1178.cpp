#include <bits/stdc++.h>
using namespace std;

int main(){

    double n;
    cin >> n;

    printf("N[0] = %.4lf\n", n);
    for(int i=1; i<100; i++){
        printf("N[%d] = %.4lf\n", i, n/pow(2, i));
    }

    return 0;
}