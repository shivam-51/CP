/*
    AUTHOR:shivam51
    IIESTS
*/
  #include<bits/stdc++.h>
  using namespace std;
  //
  #define add	 	accumulate
  #define ll 	 	long long int
  #define ff	 	first
  #define ss 	 	second
  #define pb 	 	push_back
  #define pob		pop_back
  #define pf 	 	push_front
  #define pof		pop_front
  #define mp 	 	make_pair
  #define vll 	 	vector<ll>
  #define lb 	 	lower_bound
  #define ub     		upper_bound
  #define pll 	 	pair<ll,ll>
  #define vpll   		vector<pll>
  #define all(v) 		v.begin(), v.end()
  #define rep(i,k,n)    for(int i=k;i<n;i++)
  #define urep(i,k,n)    for(int i=k;i>=n;i--)
  #define hs            ios_base::sync_with_stdio(false);cin.tie(NULL);
  template <class C> void setmin(C &a,C b){if(a>b)a=b;}
  template <class C> void setmax(C &a,C b){if(a<b)a=b;}
  const ll mod=1e9+7;
  const ll MAX=1e5+10;
  //
  //
	int main(){
		ll t;
		cin>>t;
		while(t--){
			string str;
			ll n;
			cin>>n>>str;
			ll ans=0;
			rep(i,0,n){
				ll lft=0,rgt=0;
				if(str[i]=='1')
					continue;
				rep(j,i,n)
					rgt+=(str[j]=='1');
				urep(j,i,0)
					lft+=(str[j]=='1');
				ans+=(lft*rgt);
				ans%=mod;
			}
			rep(i,0,n){
				ll lft=0,rgt=0;
				if(str[i]=='0')
					continue;
				rep(j,i,n)
					rgt+=(str[j]=='0');
				urep(j,i,0)
					lft+=(str[j]=='0');
				ans+=(lft*rgt);
				ans%=mod;
			}
			cout<<ans<<'\n';
		}
    return 0; 
} 	