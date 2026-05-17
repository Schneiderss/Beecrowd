#include <bits/stdc++.h>
using namespace std;


int main() {
 
    int n;
    cin >> n;
    while(n--){
        int k, i=2;
        bool flag = true;

        cin >> k;
        
        while(i<=sqrt(k) && flag){
            if(k % i == 0){
                flag = false;
            }
            i++;
        }
        cout << (flag ? "Prime" : "Not Prime") << endl;
    }
 
    return 0;
}