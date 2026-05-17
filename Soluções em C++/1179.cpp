#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, imp[5], par[5];
    int countp=0, counti=0;
    for(int i=0; i<15; i++){
        cin >> n;
        if(n % 2 == 0) par[countp++] = n;
        else imp[counti++] = n;
        if(countp == 5){
            for(int j=0; j<5; j++) printf("par[%d] = %d\n", j, par[j]);
            countp = 0;
        }
        if(counti == 5){
            for(int j=0; j<5; j++) printf("impar[%d] = %d\n", j, imp[j]);
            counti = 0;
        }
    }
    if(counti != 0){
        for(int i=0; i< counti; i++) printf("impar[%d] = %d\n", i, imp[i]);
    }
    if(countp != 0){
        for(int i=0; i< countp; i++) printf("par[%d] = %d\n", i, par[i]);
    }


    return 0;
}