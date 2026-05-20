#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int k, count=0;
        cin >> k;
        vector<int> v(k), vec(k);
        for(int i=0; i<k; i++){
            cin >> v[i];
            vec[i] = v[i];
        }
        sort(vec.begin(), vec.end(), greater<int>());
        for(int i=0; i<k; i++){
            if(vec[i] != v[i]) count++;
        }
        cout << k-count << endl;
    }
    return 0;
}