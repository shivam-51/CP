
      ll mul(ll x,ll y){
        return (x%md * y%md)%md;
      }

      ll add(ll x,ll y){
        return (x%md + y%md)%md;
      }
      ll powmod(ll x,ll y){
        ll res = 1LL;
        x%=md;
        while(y){
          if(y&1){
            res = mul(res,x);
          }
          y>>=1;
          x=mul(x,x);
        }
        return res;
      }

      ll gcd(ll a, ll b) { return __gcd(a, b); }

      ll euclid(ll a, ll b, ll &x, ll &y) {
          if (b) { ll d = euclid(b, a % b, y, x);
                return y -= a/b * x, d; }
            return x = 1, y = 0, a;
      }
      ll modInverse(ll a,ll p){
          ll x,y;
            euclid(a,p,x,y);
              return ((x%p+p)%p);
      }
      ll f[100005],inv[100005];
      void pre(){
        f[0] = f[1] = inv[0] = inv[1] = 1;
        rep(i,2,100001){
          f[i] = f[i-1]*i%mod;
          inv[i] = inv[i-1]*modInverse(i,mod)%mod;
        }

      }
      ll ncr(int n,int r){
        if(r<0||r>n) return 0;
        return f[n]*inv[r]%mod*inv[n-r]%mod;
      }



// ----------------------------------------------------------------------//

      ll ncr(ll n,ll r){
                        ll ans=1;
                        rep(i,0,r)
                                ans=ans*(n-i);
                        rep(i,0,r)
                                ans/=i+1;
                        return ans;
                }