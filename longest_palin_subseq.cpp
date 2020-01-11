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
                ll max_palin(string str,int strt,int lst){
                        if(strt>lst)
                                return 0;
                        if(strt==lst)
                                return 1;
                        if(str[strt]==str[lst])
                                return 2+max_palin(str,strt+1,lst-1);
                        return max(max_palin(str,strt+1,lst),max_palin(str,strt,lst-1));
                }
                void solve(){
                        string str="baabac";
                        cout<<max_palin(str,0,5);
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
