/*

        SEGMENT TREE FOR SUM AND UPDATE QUERIES


                                                                        */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 100001
                ll n,q;
                int tree[4*MAX+5];
                int arr[MAX+5];
                void build(int node, int begin , int end){
                    if(begin==end){
                        tree[node]=arr[begin];
                    }
                    else{
                        int mid=(begin + end)>>1;
                        build(2*node,begin,mid);
                        build(2*node+1,mid+1,end);
                        tree[node]=tree[node*2]+tree[node*2+1];
                    }
                }
                void update(int node, int start , int end, int idx , int val){
                        if (start==end){
                                tree[node]=val;
                        }
                        else{
                                int mid=(start+end)>>1;
                                if(start<=idx && idx<=mid)
                                        update(2*node,start,mid,idx,val);
                                else
                                        update(2*node+1,mid+1,end,idx,val);
                                tree[node]=tree[2*node]+tree[2*node+1];
                        }
                }
                int query(int node, int tl, int tr, int l, int r) {
                        if (l == tl and r == tr) {
                                return tree[node];
                        }
                        int tm=(tl+tr)>>1;
                        if(r<=tm)
                                return query(2*node,tl,tm,l,r);
                        else if(l>tm)
                               return  query(2*node+1,tm+1,tr,l,r);
                        else
                        {
                                return query(cl,tl,tm,l,tm) + query(cr,tm+1,tr,tm+1,r);
                        }
                }
                int main(){
                    cin>>n>>q;
                    // int arr[n+1];
                    for(int i=1;i<=n;i++)
                        cin>>arr[i];
                    build(1,1,n);
                    // q=0;
                    while(q--){
                            char ch;
                            ll l,r;
                            cin>>ch;
                            if(ch=='q'){
                                cin>>l>>r;
                                cout<<sum(1,1,n,l,r)<<'\n';
                            }
                            else{
                                cin>>l>>r;
                                update(1,1,n,l,r);
                            }
                    }
                }



                /*

                        MINIMUM ELEMENT OVER A RANGE

                                                                        */
                // Hail god Yato
                 
                #include <bits/stdc++.h> 
                using namespace std;
                 
                #define add(x) accumulate(x)
                #define sz(x) (int)(x).size()
                #define mp make_pair
                #define pb push_back
                #define ff first
                #define ss second
                #define lb lower_bound
                #define ub upper_bound
                #define all(x) x.begin(), x.end() 
                #define rep(i, a, b) for (int i=a; i<(b); i++)
                #define hs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
                typedef long long ll;
                typedef pair<ll,ll> pll;
                typedef vector<ll> vll;
                typedef vector<pll> vpll;
                const ll mod = 1000000007;
                const ll INF = 1e16;
                const ll MAX = 100001;
                //
                //
                                ll n,q;
                                vll tree(4*MAX+5);
                                vll arr(MAX+5);
                                void build(int node, int begin , int end){
                                    if(begin==end){
                                        tree[node]=arr[begin];
                                    }
                                    else{
                                        int mid=(begin + end)>>1;
                                        build(2*node,begin,mid);
                                        build(2*node+1,mid+1,end);
                                        tree[node]=min(tree[node*2] , tree[node*2+1]);
                                    }
                                }
                                ll query(int node,int start,int end,int l ,int r){
                                        if(r<start ||end<l)
                                                return INF;
                                        if(l<=start && end<=r)
                                                return tree[node];
                                        int mid=(start+end)>>1;
                                        return min(query(2*node,start,mid,l,r) , query(2*node+1 , mid+1,end ,l ,r));
                                }
                                void solve(){
                                        cin>>n>>q;
                                        rep(i,1,n+1)
                                                cin>>arr[i];
                                        build(1,1,n);
                                        while(q--){
                                                ll l,r;
                                                cin>>l>>r;
                                                cout<<query(1,1,n,l,r)<<'\n';
                                        }
                                }
                                int main(){ 
                                        hs;
                                        ll t;
                                        t=1;
                                        cin>>t;
                                        for (int i=1; i<=t; i++){
                                                cout<<"Scenario #"<<i<<":\n";
                                                solve();
                                         }
                        return 0; 
                }         
                 