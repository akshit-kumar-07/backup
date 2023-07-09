#include <bits/stdc++.h>
#define vi vector<int>
#define qi queue<int>
using namespace std;

vector<vi> lst;
vi p; vi d; int n;
vector<bool> used;
queue<int> q;

void init()
{
    for(int i=0;i<n;i++)
    {
        p.push_back(-1);
        d.push_back(0);
        used.push_back(false);
    }
}

void bfs(int s)
{
    q.push(s);
    used[s]=true;
    while(!q.empty())
    {
        int v=q.front();
        q.pop(); cout<<v<<" ";
        for(auto u: lst[v])
        {
            if(!used[u])
            {
                used[u]=true;
                q.push(u);
                p[u]=v;
                d[u]=d[v]+1;
            }
        }
    }
    cout<<"\n";
}

void path(int v)
{
    if(used[v]==false) 
    {
        cout<<"No path";
        return;
    }
    if(p[v]==-1)
    {
        cout<<v<<" ";
        return;
    }
    path(p[v]);
    cout<<v<<" ";
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        vi temp;
        char ch='c';int num;
        scanf("%d%c",&num,&ch);
        while(ch!='\n')
        {
            scanf("%d%c",&num,&ch);
            temp.push_back(num);
        }
        lst.push_back(temp);
    }
    init();
    bfs(0);
    for(int i=0;i<n;i++)
    {
        path(i);
        cout<<"\n";
    }
    return 0;
}
