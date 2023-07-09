#include <iostream>
#include <climits>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;



void build(int tree[],int arr[],int v,int tl,int tr)
{
    if(tl==tr)
    {
        tree[v]=arr[tl];
        return;
    }
    int tm=(tl+tr)/2;
    build(tree,arr,2*v+1,tl,tm);
    build(tree,arr,2*v+2,tm+1,tr);
    tree[v]=min(tree[2*v+1],tree[2*v+2]);
}

int min_seg(int tree[],int v,int tl,int tr,int l,int r)
{
    if(l>r) return INT_MAX;
    if(tl==l && tr==r) return tree[v];
    int tm=(tl+tr)/2;
    int ans= min(min_seg(tree,2*v+1,tl,tm,l,min(tm,r)),min_seg(tree,2*v+2,tm+1,tr,max(tm+1,l),r));
    return ans;
}

void update(int tree[],int v,int tl,int tr,int pos,int val)
{
    if(tl==tr)
    {
        tree[v]=val;
        return;
    }
    int tm=(tl+tr)/2;
    if(pos<=tm) update(tree,2*v+1,tl,tm,pos,val);
    else update(tree,2*v+2,tm+1,tr,pos,val);
    tree[v]=min(tree[2*v+1],tree[2*v+2]);
}

int main()
{
    int n,m;cin>>n>>m;
    int arr[n]; rep(i,0,n) cin>>arr[i];
    int tree[4*n]; build(tree,arr,0,0,n-1);
    while(m--)
    {
        int x,a,b;cin>>x>>a>>b;
        if(x==1)
        {
            int i=a;int v=b;
            update(tree,0,0,n-1,i,v);
        }
        if(x==2)
        {
            int l=a;int r=b;
            cout<<min_seg(tree,0,0,n-1,l,r-1)<<"\n";
        }
    }
}