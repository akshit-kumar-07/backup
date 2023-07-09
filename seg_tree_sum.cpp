#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define vi vector<ll> 
#define pb push_back
#define input(arr,m) rep(i,0,m) {ll x;cin>>x;arr.pb(x);}
using namespace std;

void build(ll tree[],int arr[],ll v,ll tl,ll tr)
{
    if(tl==tr)
    {
        tree[v]=arr[tl];
        return;
    }
    ll tm=(tl+tr)/2;
    build(tree,arr,2*v+1,tl,tm);
    build(tree,arr,2*v+2,tm+1,tr);
    tree[v]=tree[2*v+1]+tree[2*v+2];
}

void update(ll tree[],ll v,ll tl,ll tr,ll pos,ll new_val)
{
    if(tl==tr)
    {
        tree[v]=new_val;
        return;
    }
    ll tm=(tr+tl)/2;
    if(pos<=tm)
        update(tree,2*v+1,tl,tm,pos,new_val);
    else
        update(tree,2*v+2,tm+1,tr,pos,new_val);
    tree[v]=tree[2*v+1]+tree[2*v+2];
}

ll sum(ll tree[],ll v,ll tl,ll tr,ll l,ll r)
{
    if(l>r) return 0;
    if(tl==l && tr==r) return tree[v];
    ll tm=(tl+tr)/2;
    return sum(tree,2*v+1,tl,tm,l,min(r,tm))+ sum(tree,2*v+2,tm+1,tr,max(l,tm+1),r);
}

int main()
{
    ll n,m; cin>>n>>m;
    int arr[n]; rep(i,0,n) cin>>arr[i];
    ll tree[4*n];
    build(tree,arr,0,0,n-1);
    while(m--)
    {
        ll x,a,b; cin>>x>>a>>b;
        if(x==1)
        {
            ll i=a; ll v=b;
            update(tree,0,0,n-1,i,v);
        }
        if(x==2)
        {
            ll l=a; ll r=b;
            cout<<sum(tree,0,0,n-1,a,b-1)<<"\n";
        }
    }
    return 0;
}