queue<int>q;

void push(int x)
{
  q.push(x);
  
  int n=q.size();
  for(int i=0;i<n-1;i++)
  {
    int x=q.front();
    q.pop();
    q.push(x);
  }
}
int top()
{
  if(q.size())
  {
    int x=q.front();
    q.pop();
    return x;
  }
  return -1;
}
