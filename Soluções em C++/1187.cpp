#include <bits/stdc++.h>
using namespace std;

int main(){

    double sum=0, k;
    char op;
    cin >> op;

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> k;
            if(j > i && j < 11-i && i<5) sum += k;
        }
    }

    if(op == 'S') printf("%.1lf\n", sum);
    else printf("%.1lf\n", sum/30);

    return 0;
}