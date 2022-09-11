int maxD(string s)
{
  stack<char>st;
  int count=0;
  
  for(int i=0;i<s.size();i++)
  {
    if(s[i] == '(')
    {
      st.push(s[i]);
    }
    else if(s[i] == ')')
    {
      count=max(count,st.size());
      st.pop();
    }
  }
  return count;
}
