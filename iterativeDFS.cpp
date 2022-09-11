void iterative(vector<vector<int>>adj,int root)
{
  stack<int>st;
  st.push(root);
  
  unordered_map<int,int>vis;
  
  while(!st.empty())
  {
    int curr=st.top();
    vis[curr]=1;
    cout<<curr<<" ";
    for(int i:adj[curr])
    {
      if(vis[i] == 0)
      {
        st.push(curr);
      }
    }
  }
  
 return;
}
