
#include <bits/stdc++.h>
using namespace std;

struct Node{
    Node* left,*right;
    int val;
    
    Node(int v)
    {
        val=v;
        left=NULL;
        right=NULL;
    }
};

int main()
{
    Node* root=new Node(1);  
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->right->left = new Node(8);
    root->right->right = new Node(9);
    root->left->left->left = new Node(4);
    root->left->right->right = new Node(6);
    root->right->right->left = new Node(10);
    
    int key=2;
    
    queue<pair<Node*,vector<int>>>q;
    q.push({root,{}});
    
    vector<int>ans;
    
    while(true)
    {
        Node* curr=q.front().first;
        vector<int>path=q.front().second;
        q.pop();
        
        path.push_back(curr->val);
        
        if(curr->left)
        {
            if(curr->left->val == key)
            {
                ans=path;
                break;
            }
            else
            {
                q.push({curr->left,path});
            }
        }
        if(curr->right)
        {
            if(curr->right->val == key)
            {
                ans=path;
                break;
            }
            else
            {
                q.push({curr->right,path});
            }
        }
    }
    
    for(int i:ans)
    {
        cout<<i<<" ";
    }
    
}
