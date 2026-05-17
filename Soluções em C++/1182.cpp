#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    float sum=0, k;
    string str;
    cin >> n;
    cin >> str;

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> k;
            if(j == n) sum += k;
        }
    }

    if(str == "S") printf("%.1f\n", sum);
    else printf("%.1f\n", sum/12);

    return 0;
}