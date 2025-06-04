// next strictly smaller value
void monotonic_stack(vector<ll>&a){
    ll n = a.size();
  
    vector<ll>left(n, -1), right(n, n);
    stack<ll>s;

    fore(i,0,n){
        while(!s.empty() && a[s.top()] >= a[i]) s.pop(); 
        if(!s.empty()) left[i] = s.top();
        s.push(i);
    }

    s = stack<ll>(); 

    forex(i,n,0){
        while(!s.empty() && a[s.top()] >= a[i]) s.pop();
        if(!s.empty()) right[i] = s.top();
        s.push(i);
    }

    // fore(i,0,n) cout<<a[i]<<" "<<left[i]<<" "<<right[i]<<nl;
}
