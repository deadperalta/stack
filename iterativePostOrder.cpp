vector<int>post(Node* root)
{
  stack<int>s1;
  stack<int>s2;
  
  s1.push(root);
  
  while(!s1.empty())
  {
    Node* curr=s1.top();
    s1.pop();
    s2.push(curr);
    
    if(curr->left)
    {
      s1.push(curr->left);
    }
    if(curr->right)
    {
      s1.push(curr->right);
    }
  }
  
  vector<int>ans;
  
  while(!s2.empty())
  {
    ans.push_back(s2.top());
    s2.pop();
  }
  return ans;
}
