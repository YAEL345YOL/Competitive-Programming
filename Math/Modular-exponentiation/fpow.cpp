template <class T>
T fpow(T b, T e, T m){
    T r = 1;
    for(;e>0;e>>=1){
        if(e & 1) r = (r * b) % m;
        b = (b * b) % m;
    }
    return r;
}   
