void insert(stack<int>&s,int a)
{
    if(s.empty() || s.top() <= a)
    {
        s.push(a);
    }
    else
    {
        int x=s.top();
        s.pop();
        
        insert(s,a);
        s.push(x);
    }
}
void sort(stack<int>&st)
{
    if(s.size())
    {
        int top=s.top();
        s.pop();
        sort(st);
        insert(st,top);
    }
}

void sorta(int arr[],int n)
{
  stack<int>st;
  for(int i=0;i<n;i++)
  {
    st.push(arr[i]);
  }
  sort(st);
  
  int i=0;
  while(!st.empty())
  {
    arr[i]=st.top();
    st.pop();
  }
}
}
