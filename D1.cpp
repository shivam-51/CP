/*
    AUTHOR:shivam51
    IIESTS
*/
  #include<bits/stdc++.h>
  using namespace std;
  //
  #define add	 	accumulate
  #define ll 	 	long long int
  #define rep(i,k,n)    for(int i=k;i<n;i++)
  #define urep(i,k,n)    for(int i=k;i>=n;i--)

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
				ll lft = 0,rgt = 0;
				if(str[i] == '1')
					continue;
				rep(j,i,n)
					rgt+ = (str[j]=='1');
				urep(j,i,0)
					lft+ = (str[j]=='1');
				ans+ = (lft*rgt);
				ans% = mod;
			}
			rep(i,0,n){
				ll lft = 0,rgt = 0;
				if(str[i] == '0')
					continue;
				rep(j,i,n)
					rgt+ = (str[j]=='0');
				urep(j,i,0)
					lft+ = (str[j]=='0');
				ans+ = (lft*rgt);
				ans% = mod;
			}
			cout<<ans<<'\n';
		}
    return 0; 
} 	
