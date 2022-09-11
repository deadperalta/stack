int count(int n)
{
  
  if(n <= 9)
  {
    return n;
  }
  stack<int>st;
  int res=0;
  for(int i=1;i<=9;i++)
  {
    if(i <= n)
    {
      st.push(i);
      res++;
    }
    while(!st.empty())
    {
      int top=st.top();
      st.pop();
      
      for(int j=top%10;j<=9;j++)
      {
        int val=top*10+j;
        if(val <= n)
        {
          st.push(val);
          res++;
        }
      }
    }
  }
  return res;
}
