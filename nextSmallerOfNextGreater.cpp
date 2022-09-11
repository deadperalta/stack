vector<int>nsng(vector<int>&arr,int n)
{
  stack<int>st;
  st.push(n-1);
  
  vector<int>ns(n);
  ns[n-1]=-1;
  
  for(int i=n-2;i>=0;i--)
  {
     while(!st.empty() && arr[st.top()] >= arr[i])
    {
      st.pop();
    }
    if(st.empty())
    {
      ns[i]=-1;
    }
    else
    {
      ns[i]=st.top();
    }
    st.push(i);
  }
  
  while(!st.empty())
  {
    st.pop();
  }
  st.push(n-1);
  
  vector<int>ng(n);
  ng[n-1]=-1;
  
  for(int i=n-2;i>=0;i--)
  {
     while(!st.empty() && st.top() <= arr[i])
    {
      st.pop();
    }
    if(st.empty())
    {
      ng[i]=-1;
    }
    else
    {
      ng[i]=st.top();
    }
    st.push(i);
  }
  
  vector<int>ans(n);
  for(int i=0;i<n;i++)
  {
    int ngr=ng[i];
    if(ngr == -1)
    {
      ans[i]=-1;
    }
    else
    {
      ans[i]=left[ngr];
    }
  }
  return ans;
}
