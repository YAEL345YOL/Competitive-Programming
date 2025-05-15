ll fpow(ll b, ll e, ll m){
    ll r = 1;
    b %= m;
    for(;e>0;e>>=1){
        if(e & 1) r = (r * b) % m;
        b = (b * b) % m;
    }
    return r;
}   
