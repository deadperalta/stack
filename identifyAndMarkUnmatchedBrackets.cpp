void markUnmatched(string s,int n)
{
  stack<int>st;
  
  for(int i=0;i<n;i++)
  {
    if(s[i] == '(')
    {
      st.push(i);
    }
    else
    {
      if(st.empty())
      {
        s[i]='-1';
      }
      else
      {
        int top=st.top();
        st.pop();
        
        s[top]='0';
        s[i]='1';
      }
    }
  }
  
  while(!st.empty())
  {
    int top=st.top();
    st.pop();
    
    s[top]='-1';
  }
}
