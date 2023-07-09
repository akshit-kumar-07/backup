#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define vi vector<ll> 
#define pb push_back
#define input(arr,m) rep(i,0,m) {ll x;cin>>x;arr.pb(x);}
using namespace std;
vi memo(1000,-1);
int fib(int n)
{
    int f=0;
    if(memo[n]!=-1) return memo[n];
    if(n<2) f=1;
    else f=fib(n-1)+fib(n-2);
    memo[n]=f;
    return f;
}
int main()
{
    int n;cin>>n;
    rep(i,0,n) cout<<fib(i)<<" ";
    return 0;
}