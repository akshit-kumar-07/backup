#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<ll> 
#define pb push_back
#define input(arr,m) rep(i,0,m) {int x;cin>>x;arr.pb(x);}
using namespace std;
int main()
{
    ull n,s;cin>>n>>s;
    vi arr; input(arr,n);
    ull l=0,r=0,x=0,res=0;
    for(r=0;r<n;r++)
    {
        x+=arr[r];
        while(x>s) 
        {
            x-=arr[l];
            l++;
        }
        res+=r-l+1;
    }
    cout<<res;
    return 0;
}