#include <bits/stdc++.h>
using namespace std;

bool is_beautiful(vector<int>arr)
{
    int i=0,j=0;
    if(arr.size()==1) return true;
    for(i=0;i<arr.size();i++)
    {
        if(arr[i]<=arr[i+1]) continue;
        else 
        {
            j=i+1;
            break;
        }
    }
    if(j==arr.size()-1) return true;
    for(j;j<arr.size();j++)
    {
        if(arr[j]<=arr[j+1] && arr[j+1]<=arr[0]) continue;
        else break;
    }
    if(j<arr.size()) return false;
    return true;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int q;cin>>q;
        vector<int> arr;
        while(q--)
        {
            int x;cin>>x;
            arr.push_back(x);
            if(!is_beautiful(arr))
            {
                arr.pop_back();
                cout<<0;
                continue;
            }
            cout<<1;
        }
        cout<<"\n";
    }
}