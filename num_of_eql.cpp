#include <bits/stdc++.h>
#define ll unsigned long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define vi vector<ll> 
#define pb push_back
#define usi unordered_set<ll>
#define mi map<ll,ll>
#define input(arr,m) rep(i,0,m) {ll x;cin>>x;arr.pb(x);}
using namespace std;
int main()
{
    ll m,n;cin>>m>>n;
    vi arr1,arr2;
    input(arr1,m); input(arr2,n);
    usi unq; usi dup;
    rep(i,0,m)
    {
        if(unq.find(arr1[i])==unq.end())
            unq.insert(arr1[i]);
    }
    rep(i,0,n)
    {
        if(unq.find(arr2[i])==unq.end())
            unq.insert(arr2[i]);
        else dup.insert(arr2[i]);
    }
    mi map1;mi map2;
    rep(i,0,m)
    {
        if(map1.find(arr1[i])==map1.end())
            map1[arr1[i]]=1;
        else
            map1[arr1[i]]=map1[arr1[i]]+1;
    }
    rep(i,0,n)
    {
        if(map2.find(arr2[i])==map2.end())
            map2[arr2[i]]=1;
        else
            map2[arr2[i]]=map2[arr2[i]]+1;
    }
    int ans=0;
    for(auto i=dup.begin();i!=dup.end();i++)
    {
        ans+=map1[*i]*map2[*i];
    }
    cout<<ans<<"\n";
    return 0;
}