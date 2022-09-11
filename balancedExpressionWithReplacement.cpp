bool isMatching(char a,char b)
{
  if((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']') || (a == 'X'))
  {
    return true;
  }
  return false;
}

bool isBal(string s)
{
  stack<char>st;
  
  for(int i=0;i<s.size();i++)
  {
    if(s[i] == ')' || s[i] == '}' || s[i] == ']')
    {
      if(st.empty())
      {
        return false;
      }
      else
      {
        char top = st.top();
        st.pop();
        
        if(!isMatching(top,s[i]))
        {
          return false;
        }
      }
    }
    else
    {
      st.push(s[i]);
    }
  }
  return st.size() == 0;
}
