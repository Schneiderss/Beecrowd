#include <bits/stdc++.h>
using namespace std;

int main(){

    float sum=0, k;
    string str;
    cin >> str;

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> k;
            if(j > i) sum += k;
        }
    }

    if(str == "S") printf("%.1f\n", sum);
    else printf("%.1f\n", sum/66);

    return 0;
}