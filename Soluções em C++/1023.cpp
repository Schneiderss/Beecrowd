#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, j=1, sumPes=0;
    float media = 0;
    while(cin >> n){
        vector<pair<int, int>> k, v;
        int a, b;

        for(int i=0; i<n; i++){
            scanf("%d %d", &a, &b);
            k.push_back({a, b});
            media += k[i].second;
            sumPes += k[i].first;
            a = floor(k[i].second/k[i].first);
            b = k[i].first;
            v.push_back({a, b});
        }

        sort(v.begin(), v.end());

        printf("Cidade# %d:", j);
        for(int i=0; i<n; i++){
            printf("%d-%d ", v[i].second, v[i].first);
        }
        printf("\b\nConsumo medio: %.2f m3.\n", media/sumPes);

        //cin >> n;
        media = 0;
        j++;
        sumPes=0;
        if(n != 0){
            printf("\n");
        }
    }

    return 0;
}