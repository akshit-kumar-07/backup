#include <bits/stdc++.h>
#define ll unsigned long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define vi vector<ll> 
#define pb push_back
#define input(arr,m) rep(i,0,m) {ll x;cin>>x;arr.pb(x);}
using namespace std;
int main()
{
    ll n,k;cin>>n>>k;
    vi arr; input(arr,n);
    multiset<ll> set;
    ll l=0,r=0,ans=0;
    for(r=0;r<n;r++)
    {
        set.insert(arr[r]);
        while(l<r && *(--set.end())-*(set.begin())>k) 
            set.erase(set.find(arr[l++]));
        ans+=r-l+1;
    }
    cout<<ans;
    return 0;
}