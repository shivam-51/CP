/*
    AUTHOR:shivam51
    IIESTS
*/
  #include<bits/stdc++.h>
  using namespace std;
  //
  #define ll 	 	long long int
  #define vll 	 	vector<ll>
  #define all(v) 	v.begin(), v.end()
  #define rep(i,k,n)    for(int i=k;i<n;i++)
  #define hs            ios_base::sync_with_stdio(false);cin.tie(NULL);
  template <class C> void setmin(C &a,C b){if(a>b)a=b;}
  template <class C> void setmax(C &a,C b){if(a<b)a=b;}
  const ll mod=1e9+7;
  const ll MAX=1e5+10;
  //
  //
	int main(){
		ll n;
		cin>>n;
		vll vec(n);
		rep(i,0,n)
			cin>>vec[i];
		sort(all(vec));
		cout<<vec[0]+vec[1];
    return 0; 
} 	
