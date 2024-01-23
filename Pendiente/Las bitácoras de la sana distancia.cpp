// ΨΔΣL345ΨΘL
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define f first
#define s second
#define pb push_back
#define ld long double
#define ll long long
#define ull unsigned long long
#define sp(x) fixed<<setprecision(x)
#define all(x) x.begin(),x.end()
#define fore(it,i,f) for(auto it=i;it<f;++it)
#define letter(x) x>=65 && x<=90 || x>=97 && x<=122 ? true:false
#define number(x) x>=48 && x<=57 ? true:false
/*'A' = 65 'Z' = 90
  'a' = 97 'z' = 122
  '0' = 48 '9' = 57 */
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,suma=0;
    cin>>n;
    
    queue<ll>duraciones;
    queue<string>numeros;
    stack<string>atendiendo;
    
    fore(i,0,n){
        ll aux;
        cin>>aux;
        suma+=aux;
        duraciones.push(suma);
    }
    
    fore(i,0,n){
        string numero;
        cin>>numero;
        numeros.push(numero);
    }
    
    
    
    ll contadorMinutos=1;
    
    while(!duraciones.empty()){
        if(!numeros.empty()){
            atendiendo.push(numeros.front());
            numeros.pop();
        }
        if(contadorMinutos==duraciones.front() or contadorMinutos==1){
            cout<< atendiendo.top() << nl;
            atendiendo.pop();
            duraciones.pop();
        }
        ++contadorMinutos;
    }
    
    return 0;
}
