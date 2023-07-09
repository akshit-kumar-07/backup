#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>> arr(6);
    arr[0]={4,5};
    arr[1]={4,2};
    arr[2]={2,3};
    arr[3]={2,1};
    arr[4]={3,6};
    arr[5]={3,12};
    sort(arr.begin(),arr.end());
    for(auto i=arr.begin();i!=arr.end();i++) cout<<arr[i].first<<" "<<arr[i].second<<"\n";
}