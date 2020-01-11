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
        
                string s;
                int len;
                int l[MAX];
                int best;
                int result;
                 
                void kmp()
                {
                    l[0] = 0;
                    for (int i = 1; i < len; i++)
                    {
                        int cur = l[i - 1];
                        while (cur > 0 && s[i] != s[cur])
                            cur = l[cur - 1];
                        if (s[i] == s[cur])
                            l[i] = cur + 1;
                        else
                            l[i] = 0;
                        if (l[i] > best && i != len - 1) 
                            best = l[i];
                    }
                }
                void solve(){
                        cin>>s;
                        len=s.length();
                        kmp();
                        rep(i,0,s.length())
                                cout<<l[i];
                }
                int32_t main(){ 
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
 