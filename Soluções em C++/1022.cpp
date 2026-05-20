#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, d1, n2, d2, n, j;
    char k, op;
    cin >> n;
    while(n--){
        cin >> n1 >> k >> d1 >> op >> n2 >> k >> d2;
        if(op == '+'){
            n1 = (n1*d2 + n2*d1);
            d1 = d1*d2;
        }
        else if(op == '-'){
            n1 = (n1*d2 - n2*d1);
            d1 = d1*d2;
        }
        else if(op == '*'){
            n1 = n1*n2;
            d1 = d1*d2;
        }
        else{
            n1 = n1*d2;
            d1 = n2*d1;
        }
        j = __gcd(abs(n1), abs(d1));
        printf("%d/%d = %d/%d\n", n1, d1, n1/j, d1/j);
    }
    return 0;
}