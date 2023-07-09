#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    solve:
    while(t--)
    {
        string str;cin>>str;
        stack<char> s;int ans=0;int n=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='<') s.push(str[i]);
            else
            {
                if(!s.empty())
                {
                    s.pop();n++;
                    if(s.empty())
                    {
                        ans+=n*2;
                        n=0;
                    }
                }
                else
                {
                    cout<<ans<<"\n";
                    goto solve;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}