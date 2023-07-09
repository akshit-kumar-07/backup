#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;cin>>n;
    a=1;b=2;
    if(n==1)
     cout<<1;
    else {if(n==2) cout<<2;
    else
    {
        int i=2;int res=0;
        while(i<n)
        {
            res=a+b;
            a=b;
            b=res;
            i++;
        }
        cout<<res;
    }}
    return 0;
}