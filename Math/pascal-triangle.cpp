template <class T>
struct pascal{
    vector<vector<T>>matrix;
    pascal(T n){
        matrix.resize(n,vector<T>(n,0));
        matrix[0][0] = 1;
        for(T i=1;i<n;++i){
            for(T j=0;j<n;++j){
                matrix[i][j] = matrix[i-1][j] + (j > 0 ? matrix[i-1][j-1] : 0);
            }
        }
    }
    void print(){
        for(int i=0;i<matrix.size();++i){
            for(int j=0;j<=i;++j){
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }
    } 
    vector<T>& operator[](T index){
        return matrix[index];
    }
};
