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
  #define hs            ios_base::sync_with_stdio(false);cin.tie(NULL);
  template <class C> void setmin(C &a,C b){if(a>b)a=b;}
  template <class C> void setmax(C &a,C b){if(a<b)a=b;}
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
