#include <bits/stdc++.h>
using namespace std;

int main(){

    int x, y, z;

    while(cin >> x >> y >> z){
        int maior = max(max(x, y), z);
        int minimo = min(min(x, y), z);
        int num = x+y+z-maior-minimo;
        maior *= maior;
        minimo *= minimo;
        num *= num;
        if(maior == (minimo+num)){
            if(gcd(gcd(x, y), z) == 1)
                cout << "tripla pitagorica primitiva\n";
            else
                cout << "tripla pitagorica\n";
        }else{
            cout << "tripla\n";
        }

    }

    return 0;
}