#include<bits/stdc++.h>
using namespace std;

#define fore(i,in,f) for(auto i=in;i<f;++i)
#define pb push_back
#define sp(x) fixed<<setprecision(x)
#define all(x) x.begin(), x.end()
#define nl "\n"
#define ll long long
#define ul unsigned long long

const int INF = 1e9;
const ll LL_INF = 1e18;
const int MOD = 1e9 + 7;

const ll N = 100000;

vector<ll>mem(N);

ll solve(ll x){
    ll l = 0, r = N - 1, m, ans = 0;
    while(l <= r){
        m = l + (r - l) / 2;

        if(x >= mem[m]){
            ans = m;
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    
    return m;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    fore(i,0,N){
        mem[i] = i * (i + 1) / 2;
        if(i > 0){
            mem[i] += mem[i-1];
        }
    }

    ll t;
    cin>>t;

    while(t--){
        ll x;
        cin>>x;

        cout<<solve(x)<<nl;
    }

    return 0;
}
