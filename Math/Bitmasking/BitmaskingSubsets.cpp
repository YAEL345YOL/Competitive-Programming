#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

void bitmaskSubsets(ll n){
    for(ll i=0;i<(1LL<<n);++i){
        for(ll j=n-1;j>=0;--j){
            if(i & (1 << j)){
                // cout<<1;
                // j bit on (included)
            }
            else{
                // cout<<0;
                // j bit off (excluded)
            }
        }
        // cout<<nl;
        // logic for case 
    }
}

int main(){

    bitmaskSubsets(10);
    
}
