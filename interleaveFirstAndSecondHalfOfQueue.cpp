queue<int>interleave(queue<int>q)
{
  int n=q.size()/2;
  
  stack<int>st;
  
  for(int i=0;i<n;i++)
  {
    st.push(q.front());
    q.pop();
  }
  
  while(!st.empty())
  {
    q.push(st.top());
    st.pop();
  }
  
  for(int i=0;i<n;i++)
  {
    q.push(q.front());
    q.pop();
  }
  for(int i=0;i<n;i++)
  {
    st.push(q.front());
    q.pop();
  }
  
  while(!st.empty())
  {
    q.push(st.pop());
    st.pop();
    
    q.push(q.front());
    q.pop();
  }
  return q;
}
