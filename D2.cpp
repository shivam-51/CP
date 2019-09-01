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
  #define hs            ios_base::sync_with_stdio(false);cin.tie(NULL);
  template <class C> void setmin(C &a,C b){if(a>b)a=b;}
  template <class C> void setmax(C &a,C b){if(a<b)a=b;}
  const ll mod=1e9+7;
  const ll MAX=1e10;
  //
  //
	int main(){
		ll t;
		cin>>t;
		while(t--){
			ll n;
			cin>>n;
		string str;
		cin>>str;
		ll ans=0;
		vll zero(n+2,0),one(n+2,0);
		rep(i,0,n){
			if(i==0)
				zero[0]=str[0]=='0';
			else
				zero[i]= zero[i-1] + (str[i]=='0');
		}
		rep(i,0,n){
			if(i==0)
				one[0]= str[0]=='1';
			else
				one[i]= one[i-1] + (str[i]=='1');
		}
		rep(i,1,n){
			if(str[i]=='0'){
				ans+=(one[i]*(one[n-1]-one[i]))%mod;
			}
			else{
				ans+=(zero[i]*(zero[n-1]-zero[i]))%mod;
			}
			ans%=mod;
		}
		cout<<ans<<'\n';
	}
    return 0; 
} 	