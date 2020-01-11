           




            vll prim;
            ll arr[MAX];
          void sieve(){
                rep(i,0,MAX)
                arr[i]=1;
                for(ll i=2;i*i<=MAX;i++){
                        if(arr[i])
                                for(ll j=i*i;j<=MAX;j+=i){
                                        arr[j]=0;
                                }
                }
                rep(i,2,MAX)
                if(arr[i])
                        prim.pb(i);
        }