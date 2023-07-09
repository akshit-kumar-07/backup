#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define vi vector<ll> 
#define pb push_back
#define input(arr,m) rep(i,0,m) {ll x;cin>>x;arr.pb(x);}
using namespace std;
int main()
{
    ll n,k;cin>>n>>k;
    vi arr; input(arr,n);
    map<ull,ull> mp;
    int l=0,r=0,ans=0;
    for(r=0;r<n;r++)
    {
        if(mp.find(arr[r])==mp.end())
            mp[arr[r]]=1;
        else
            mp[arr[r]]=mp[arr[r]]+1;
        while(mp.size()>k)
        {
            if(mp[arr[l]]==1)
                mp.erase(arr[l]);
            else
                mp[arr[l]]=mp[arr[l]]-1;
            l++;
        }
        ans+=(r-l+1);
    }
    cout<<ans;
    return 0;
}