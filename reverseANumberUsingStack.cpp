int rev(int n)
{
  stack<int>st;
  
  while(n)
  {
    st.push(n%10);
    n/=10;
  }
  
  int num=0;
  
  while(!st.empty())
  {
    num=num*10+st.top();
    st.pop();
  }
  return num;
}
