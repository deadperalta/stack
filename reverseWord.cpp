void reverse(string s)
{
  stack<char>st;
  
  for(int i=0;i<s.size();i++)
  {
    if(s[i] != '')
    {
      st.push(s[i]);
    }
    else
    {
      while(!st.empty())
      {
        cout<<st.top()<<" ";
        st.pop();
      }
    }
  }
  while(!st.empty())
  {
     cout<<st.top()<<" ";
     st.pop();
  }
}
