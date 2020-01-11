// Hail god Yato
 
#include <bits/stdc++.h> 
using namespace std;
 
#define add(x) accumulate(x)
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end() 
#define rep(i, a, b) for (int i=a; i<(b); i++)
#define hs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
const ll mod = 1000000007;
const ll INF = 1e18;
const ll MAX = 100001;
//
//
                vll vec;
                int store[101][101];
                ll n;
                ll matrixmult(ll l,ll r){
                        if(l==r)
                                return 0;
                        if(store[l][r])
                                return store[l][r];
                        ll cnt=INF;
                        rep(k,l,r)
                                cnt=min(cnt,matrixmult(l,k)+matrixmult(k+1,r)+vec[l-1]*vec[k]*vec[r]);
                        store[l][r]=cnt;
                        return cnt;
                }
                void solve(){
                        cin>>n;
                        vec.clear();
                        vec.resize(n);
                        rep(i,0,n)
                                cin>>vec[i];
                        rep(i,0,101)
                                rep(j,0,101)
                                        store[i][j]=0;
                        cout<<matrixmult(1,n-1)<<'\n';
                }
                int main(){ 
                        hs;
                        ll t;
                        t=1;
                        cin>>t;
                        for (int i=1; i<=t; i++){
                                //printf("Case #%d: ", i);
                                solve();
                         }
        return 0; 
}         
 