/*
// ΨΔΣL345ΨΘL
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
*/

void Merge(vector<ll>&A,ll I,ll M,ll F){
    vector<ll>R;
    vector<ll>L;

    fore(i,0,M-I+1) L[i] = A[I+i];
    fore(i,0,F-M) R[i] = A[M+i+1];

    ll i=0,j=0,k=I;

    while(i<M-I+1 && j<F-M){
        if(L[i]<=R[j]){
            A[k] = L[i];
            ++i;
        }
        else{
            A[k] = R[j];
            ++j;
        }
        ++k;
    }
    while(i<M-I+1){
        A[k] = L[i];
        ++i;
        ++k;
    }
    while(j<F-M){
        A[k] = R[i];
        ++j;
        ++k;
    }
}
void MergeSort(vector<ll>&A,ll I,ll F){
    while(I<F){
        ll M = I+(F-I)/2;
        MergeSort(A,I,M);
        MergeSort(A,M+1,F);
        Merge(A,I,M,F);
    }
} 