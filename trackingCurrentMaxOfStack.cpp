stack<pair<int,int>>st;

void push(int x)
{
  if(st.empty())
  {
    st.push({x,x});
  }
  
  else
  {
    int maxi=max(st.top().second,x);
    st.push({x,maxi});
  }
}

int getMax()
{
  if(!st.empty())
  {
    return st.top().second;
  }
}

int pop()
{
  if(!st.empty())
  {
    st.pop();
  }
}
