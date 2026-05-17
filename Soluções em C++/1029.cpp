#include <bits/stdc++.h>
using namespace std;

int fib(int num, int *count){
    (*count)++;
    if(num == 0) return 0;
    else if(num == 1) return 1;
    return fib(num-1, count) + fib(num-2, count);
}

int main(){

    int n, k, count;
    cin >> n;
    while(n--){
        count=0;
        int j;
        cin >> k;

        j = fib(k, &count);

        printf("fib(%d) = %d calls = %d\n", k, count-1, j);

    }

    return 0;
}