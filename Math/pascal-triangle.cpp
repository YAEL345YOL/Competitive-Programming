const ll N = 50;
vector<vector<ll>>matrix;

void pascal(){
    matrix.resize(N,vector<ll>(N,0));
    matrix[0][0] = 1;
    for(ll i=1;i<matrix.size();++i){
        for(ll j=0;j<=i;++j){
            matrix[i][j] = matrix[i-1][j] + (j > 0 ? matrix[i-1][j-1] : 0);
        }
    }
}
