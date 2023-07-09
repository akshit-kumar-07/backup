#include <iostream>
#include <utility>
#include <climits>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pi pair<int,int>
using namespace std;

pi combine(pi a,pi b)
{
    if(a.first<b.first) return a;
    if(a.first> b.first) return b;
    return make_pair(a.first,a.second+b.second);
}

void build(pi tree[],int arr[],int n)
{
    rep(i,0,n) 
        tree[n+i]=make_pair(arr[i],1);
    for(int i=n-1;i>0;i--) 
        tree[i]=combine(tree[2*i],tree[2*i+1]);
}

void update(pi tree[],int p,int v,int n)
{
    tree[p+n]={v,1}; p+=n;
    for(int i=p;i>0;i/=2)
        tree[i/2]=combine(tree[i],tree[i+1]);
}

pi get_min(pi tree[],int n,int l,int r)
{
    pi res;
    for(l+=n,r+=n;l<r;l/=2,r/=2)
    {
        if(l&1) res=tree[l++];
        if(r&1) res=tree[--r];
    }
    return res;
}

int main()
{
    int n,m;cin>>n>>m;
    int arr[n]; rep(i,0,n) cin>>arr[i];
    pi tree[2*n]; build(tree,arr,n);
    while(m--)
    {
        int x,a,b; cin>>x>>a>>b;
        if(x==1)
        {
            int i,v;i=a;v=b;
            update(tree,i,v,n);
        }
        if(x==2)
        {
            int l,r; l=a;r=b;
            cout<<get_min(tree,n,0,n).first<<" "<<get_min(tree,n,0,n-1).second<<"\n";
        }
    }
    return 0;
}