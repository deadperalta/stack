priority_queue<pair<int,int>>q;
int count=0;

void push(int x)
{
  q.push({count,x});
  count++;
}

int pop()
{
  if(q.size())
  {
    auto top=q.top();
    q.pop();
    returnn top.second;
  }
}
