/*
    AUTHOR:shivam51
    IIESTS
*/

  #include<bits/stdc++.h>
  using namespace std;
  //
  #define ll 	 	long long int
  #define rep(i,k,n)    for(int i=k;i<n;i++)

  const ll mod=1e9+7;
  const ll MAX=1e5+10;
  //
  //
	int main(){
		ll n,m;
		cin>>n>>m;
		ll lft=0,rgt=0;
		rep(i,0,m){
			ll k;
			cin>>k;
			if(k<=n)
				++lft;
			if(k>=n)
				++rgt;
		}
		cout<<max(lft,rgt);
    return 0; 
} 	