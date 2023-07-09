#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,k; cin>>n>>k;
        if(k>=32) cout<<n+1<<"\n";
        else
        {
            ll a =pow(2,k);
            cout<<(a,n+1)<<"\n";
        }
    }
    return 0;
}