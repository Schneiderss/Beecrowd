#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n && n!=0){
        string str;
        vector<int> v(n);
        int sum = 0;

        for(int i=0; i<n; i++){
            cin >> str;
            str.erase(str.size()-3, 1); // remove o ponto decimal
            v[i] = stoi(str);
            sum += v[i];
        }

        int f = sum / n;
        int r = sum % n;

        sort(v.begin(), v.end(), greater<int>());

        int x=0;
        for(int i=0; i<n; i++){
            int target = (i<r) ? f+1 : f;
            if(v[i] > target)
                x += v[i] - target;
        }

        printf("$%d.%.2d\n", x/100, x%100);
    }
    return 0;
}