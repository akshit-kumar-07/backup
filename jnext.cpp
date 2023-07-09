#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x; cin>>x;
        vector<int> arr; stack<int> s;
        for(int i=0;i<x;i++)
        {
            int n;
            cin>>n; arr.push_back(n);
        }
        int first=0;int last=arr.size()-1;
        while(last>=first)
        {
            if(arr[last]<=arr[last-1])
            {
                s.push(arr[last]);
                last--;
            }
            else
            {
                s.push(arr[last]);
                last--;
                break;
            }
        }
        if(last==-1)
        {
            cout<<"-1\n";
            return 0;
        }
        for(int i=first;i<last;i++) cout<<arr[i];
        while(!s.empty())
        {
            cout<<s.top();
            s.pop();
        }
        cout<<arr[last]<<"\n";
    }
    return 0;
}