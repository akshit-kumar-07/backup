#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> arr1,vector<int> arr2,int arr[])
{
    int i=0;int j=0;int k=0;
    while(i<arr1.size() && j<arr2.size())
    {
        if(arr1[i]<arr2[j])
            arr[k++]=arr1[i++];
        else
            arr[k++]=arr2[j++];
    }
    while(i<arr1.size()) arr[k++]=arr1[i++];
    while(j<arr2.size()) arr[k++]=arr2[j++];
}
void num_grtr(vector<int> arr2,int arr[],int n)
{
    int i=0;int j=0;
    while(i<n && j<arr2.size())
    {
        while(arr[i]!=arr2[j]) i++;
        cout<<i-j<<" ";
        i++;j++;
    }
}

int main()
{
    int m;int n;cin>>m>>n;
    int arr[m+n];
    vector<int> arr1,arr2;
    for(int i=0;i<m;i++) 
    {
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    for(int i=0;i<n;i++) 
    {
        int x;
        cin>>x;
        arr2.push_back(x);
    }
    merge(arr1,arr2,arr);
    num_grtr(arr2,arr,m+n);
    return 0;
}