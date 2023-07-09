#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void merge(vi arr1,vi arr2)
{
    int i=0,j=0,k=0;
    while(i<arr1.size() || j<arr2.size())
    {
        if(j==arr2.size() || i<arr1.size()&&arr1[i]<arr2[j])
            cout<<arr1[i++]<<" ";
        else
             cout<<arr2[j++]<<" ";
    }
}
int main()
{
    int m;int n;cin>>m>>n;
    vi arr1; vi arr2;
    rep(i,0,m) {
        int x;cin>>x;
        arr1.pb(x);
    }
    rep(i,0,n) {
        int x;cin>>x;
        arr2.pb(x);
    }
    merge(arr1,arr2);
    return 0;
}