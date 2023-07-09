#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define vi vector<ull> 
#define pb push_back
#define input(arr,m) rep(i,0,m) {ull x;cin>>x;arr.pb(x);}
using namespace std;
int main()
{
    ull n,s;cin>>n>>s;
    vi arr; input(arr,n);
    ull l=0,r=0,x=0,res=0;
    for(r=0;r<n;r++)
    {
        x+=arr[r];
        while(x-arr[l]>=s)
        {
            x-=arr[l];
            l++;
        }
        if(x>=s)
            res+=l+1;
    }
    cout<<res;
    return 0;
}