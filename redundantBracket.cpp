bool redundant(string s)
{
  stack<char>st;
  for(char ch:s)
  {
    if(ch == ')')
    {
      char c=st.top();
      st.pop();
      
      bool flag=true;
      
      while(!st.empty() && top != ')')
      {
        if(top == '+' || top == '-' || top == '/' || top == '*' || isAlpha(top))
        {
          flag=false;
        }
        top=st.top();
        st.pop();
      }
      else
      {
        st.push(ch);
      }
      if(flag == true)
      {
        return true;
      }
    }
  }
  return false;
}
