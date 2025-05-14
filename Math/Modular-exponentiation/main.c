#include<stdio.h>
#include<math.h>

#define ll long long

ll p(ll b, ll e, ll m){
    if(e == 0) return 1LL;
    ll v = p(b, e/2, m);
    ll res = (v * v) % m;
    if(e % 2 != 0) return (res * (b % m)) % m;
    return res;
}

int main(){
    printf("%lld",p(2, 128, 1000000));
}
