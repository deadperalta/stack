int solve(vector<int>&arr,int n)
{
  stack<int>st;
  st.push(arr[0]);
  
  vector<int>left(n);
  left[0]=-1;
  
  for(int i=1;i<n;i++)
  {
    while(!st.empty() && st.top() < arr[i])
    {
      st.pop();
    }
    
    if(st.empty())
    {
      left[i]=-1;
    }
    else
    {
      left[i]=st.top();
    }
    st.push(arr[i]);
  }
  
  while(!st.empty())
  {
    st.pop();
  }
  
  st.push(arr[n-1]);
  vector<int>right(n);
  right[n-1]=-1;
  
  for(int i=n-2;i>=0;i--)
  {
    while(!st.empty() && st.top() < arr[i])
    {
      st.pop();
    }
    
    if(st.empty())
    {
      right[i]=-1;
    }
    else
    {
      right[i]=st.top();
    }
    st.push(arr[i]);
  }
  
  int ans=INT_MIN;
  
  for(int i=0;i<n;i++)
  {
    ans=max(ans,left[i]*right[i]);
  }
  return ans;
}
