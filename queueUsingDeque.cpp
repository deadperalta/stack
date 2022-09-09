deque<int>q;

void push(int x)
{
  q.push_back(x);
}

int pop()
{
  if(q.size())
  {
    int top=q.front();
    q.pop_front();
    return top;
  }
}
