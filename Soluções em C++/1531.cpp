#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

using ll = long long;

pair<ll, ll> fib(ll n, ll mod) {

    if (n == 0)
        return {0, 1};

    auto p = fib(n >> 1, mod);

    ll a = p.first;
    ll b = p.second;

    ll c = (a * ((2 * b % mod - a + mod) % mod)) % mod;
    ll d = (a * a % mod + b * b % mod) % mod;

    if (n & 1)
        return {d, (c + d) % mod};

    return {c, d};
}

int main() {

    ll n, m;

    while (scanf("%ld %ld", &n, &m)) {

        ll fn = fib(n, m).first;

        cout << fib(fn, m).first << endl;
    }

    return 0;
}