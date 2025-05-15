const ll N;
vector<bool>prime;
vector<ll>primes;

void sieve(){
    prime.resize(N,1);
    prime[0] = prime[1] = 0;
    for(ll i=2;i*i<=prime.size();++i){
        if(prime[i]){
            for(ll j=i*i;j<prime.size();j+=i){
                prime[j] = 0;
            }
        }
    }
    for(ll i=0;i<prime.size();++i){
        if(prime[i]){
            primes.pb(i);
        }
    }
}
