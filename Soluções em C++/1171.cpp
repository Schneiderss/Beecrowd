#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    map<int, int> m;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());

    for(int x:v) m[x]++;
    for(auto &p:m){
        cout << p.first << " aparece " << p.second << " vez(es)\n";
    }

    return 0;
}