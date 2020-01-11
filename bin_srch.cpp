                




//      Binary Search algorithm for FFFFFFFFFTTTTTTTTTTTT

                ll oper(ll k){
                        if(log2(k)>=5)
                                return 1;
                        return 0;
                }
                void solve(){
                        ll lo=0,hi=MAX;
                        while(lo<hi){
                                ll mid=(lo+hi)>>1;
                                if(oper(mid))
                                        hi=mid;
                                else
                                        lo=mid+1;
                        }
                        cout<<lo;
                }