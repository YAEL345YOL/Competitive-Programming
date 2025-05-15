void subsets(int n){
    for(int i=0;i<(1<<n);++i){
        for(int j=0;j<n;++j){
            if(i & (1<<j)){
                // j bit on (included)
            }
            else{
                // j bit off (excluded)
            }
        }
        // logic for subset
    }
}
