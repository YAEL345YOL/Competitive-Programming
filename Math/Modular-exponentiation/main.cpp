#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll p(ll b, ll e, ll m){
    if(e == 0) return 1LL;
    ll v = p(b, e/2, m);
    ll res = (v * v) % m;
    if(e % 2 != 0) return (res * (b % m)) % m;
    return res;
}

int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    
    cout<<p(2, 128, 1000000);

    return 0;
}
