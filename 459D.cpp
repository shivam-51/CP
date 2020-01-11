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

                void update(ll tree[],ll n,ll idx, ll val){
                    while (idx <= n){
                        tree[idx] += val;
                        idx += (idx & -idx);
                    }
                }
                ll read(ll tree[],ll idx){
                    ll sum = 0;
                    while (idx > 0){
                        sum += tree[idx];
                        idx -= (idx & -idx);
                    }
                    return sum;
                }
                void solve(){
                        ll n;
                        cin>>n;
                        vll vec(n);
                        rep(i,0,n)
                                cin>>vec[i];
                        vll fst(n),snd(n);
                        unordered_map<ll,ll> m;
                        rep(i,0,n)
                                fst[i]=++m[vec[i]];
                        m.clear();
                        ll tree[n+1];
                        rep(i,0,n+1)
                                tree[i]=0;
                        for(int i=n-1;i>=0;i--){
                                update(tree,n,++m[vec[i]],1);
                                snd[i]=m[vec[i]];
                        }
                        ll ans=0;
                        rep(i,0,n){
                                update(tree,n,snd[i],-1);
                                ans+=read(tree,fst[i]-1);
                        }
                        cout<<ans;

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
 