#include <bits/stdc++.h>
using namespace std;

#define REP(i,a,b) for(int i=a; i<b; i++) 

int main(){
    int n, k;
    cin >> n;

    while(n != 0){
        int j=0, m=0;
        REP(i,0,n){
            cin >> k;
            if(k == 1)
                j++;
            else
                m++;
        }
        printf("Mary won %d times and John won %d times\n", m, j);
        cin >> n;
    }
}
