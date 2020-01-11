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
const ll MAX = 50001;
//
//
                vll vec[1000];
                ll k=0;
                void dfs(ll idx,vll &vis,ll c){
                        if(vis[idx])
                                return ;
                        vis[idx]=c;
                        ++k;
                        for(ll K:vec[idx])
                                dfs(K,vis,c);
                        // return 1+k;
                }
                void solve(){
                        ll n,m;
                        cin>>n>>m;
                        rep(i,0,m){
                                ll x,y;
                                cin>>x>>y;
                                vec[x].pb(y);
                                vec[y].pb(x);
                        }

                        ll c=0;
                        vll store;
                        store.pb(0);
                        vll vis(n+1,0);
                        rep(i,1,n+1){
                                if(vis[i]!=0)
                                        continue;
                                dfs(i,vis,++c);
                                store.pb(k);
                                k=0;
                        }
                        rep(i,1,n+1)
                                cout<<store[vis[i]];
                }
                int main(){ 
                        hs;
                        ll t;
                        t=1;
                        // cin>>t;
                        for (int i=1; i<=t; i++){
                                //printf("Case #%d: ", i);
                                solve();
                         }
        return 0; 
}         
 