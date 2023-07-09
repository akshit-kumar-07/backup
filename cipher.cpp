#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string str;cin>>str;
        vector<char> ans;
        int i=0;int j=1;
        while(i!=n && j!=n)
        {
            //printf("str[i]=%c str[j]=%c i=%d j=%d\n",str[i],str[j],i,j);
            if(str[j]!=str[i])
            {
                j++;
                continue;
            }
            else
            {
                ans.push_back(str[j]);
                j++;i=j;j++;
            }
        }
        for(char i:ans) cout<<i;
        cout<<"\n";
    }
}