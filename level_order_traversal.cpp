#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

int main()
{
    Node *root=newNode(4);
    root->left=newNode(9); root->right=newNode(2);
    root->left->left=newNode(3); root->left->right=newNode(5); root->right->left=newNode(7);
    vector<Node*> tmp; queue<Node*> q; vector<int> ans;
    q.push(root);
    while(1){
    if(q.empty())
        break;
    while(!q.empty())
    {
        Node *x=q.front(); q.pop();
        tmp.push_back(x);
    }
    int maxVal=INT_MIN;
    for(int i=0;i<tmp.size();i++)
    {
        if(tmp[i]->data>maxVal) {
            maxVal=tmp[i]->data;
        }
    }
    ans.push_back(maxVal);
    for(int i=0;i<tmp.size();i++)
    {
        if(tmp[i]->left!=NULL) q.push(tmp[i]->left);
        if(tmp[i]->right!=NULL) q.push(tmp[i]->right);
    }
    tmp.clear();
    }
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0;
}