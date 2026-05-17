#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, x, y;
    int r, b, c;
    cin >> n;
    
    while(n--){
        cin >> x >> y;
        
        r = 9*pow(x, 2) + pow(y, 2);
        b = 2*pow(x, 2) + 25*pow(y, 2);
        c = pow(y, 3) - 100*x;
        
        cout << ((r > b) ? ((r > c) ? ("Rafael ganhou\n") : ("Carlos ganhou\n"))
        : ((b > c) ? ("Beto ganhou\n") : ("Carlos ganhou\n")));
        
    }
    
 
    return 0;
}