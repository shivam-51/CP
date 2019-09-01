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
		ll n;
		cin>>n;
		if(n == 1)
			return cout<<1 , 0;
		ll ans = 0;
		rep(i,1,n+1)
			ans+ = (2*i);
		cout<<ans;
    return 0; 
} 	
