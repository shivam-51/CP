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
                void solve(){
                        ll n;
                        cin>>n;
                        vll vec(n);
                        rep(i,0,n)
                                cin>>vec[i];
                        vpll another;
                        rep(i,0,n)
                                another.pb(mp(vec[i],i));
                        sort(all(another));
                        ll cnt=0;
                        for(pll p:another)
                                vec[p.ss]=++cnt;
                        for(ll k:vec)
                                cout<<k<<" ";
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
 