int prec(char ch)
{
  if(ch == '^')
  {
    return 3;
  }
  else if(ch == '*' || ch == '*')
  {
    return 2;
  }
  else if(ch == '+' || ch == '-')
  {
    return 1;
  }
  return -1;
}

int val(int a,int b,char ch)
{
  if(ch == '+')
  {
    return a+b;
  }
  else if(ch == '-')
  {
    return a-b;
  }
  else if(ch == '*')
  {
    return a*b;
  }
  return a/b;
}

int solve(string s)
{
  stack<int>values;
  stack<char>ops;
  
  int i=0;
  
  while(i < s.size())
  {
    if(isDigit(s[i]))
    {
      int val=0;
      
      while(isDigit(s[i]))
      {
        val=val*10+(s[i]-'0');
        i++;
      }
      values.push_back(val);
    }
    else if(isOp(s[i]))
    {
      ops.push_back(op);
      i++;
    }
    else if(s[i] == ')')
    {
      while(!ops.empty() && ops.top() != '(')
      {
          int val2 = values.top();
          values.pop();
                 
          int val1 = values.top();
          values.pop();
                 
          char op = ops.top();
          ops.pop();
                 
          values.push(applyOp(val1, val2, op));
       }
             
            // pop opening brace.
       if(!ops.empty())
          ops.pop();
     }
     else if(tokens[i] == '('){
            ops.push(tokens[i]);
        }
    else
    {
       while(!ops.empty() && precedence(ops.top())
                                >= precedence(tokens[i])){
                int val2 = values.top();
                values.pop();
                 
                int val1 = values.top();
                values.pop();
                 
                char op = ops.top();
                ops.pop();
                 
                values.push(applyOp(val1, val2, op));
            }
             
            // Push current token to 'ops'.
            ops.push(tokens[i]);
        }
    }
  while(!ops.empty()){
        int val2 = values.top();
        values.pop();
                 
        int val1 = values.top();
        values.pop();
                 
        char op = ops.top();
        ops.pop();
                 
        values.push(applyOp(val1, val2, op));
    }
     
    // Top of 'values' contains result, return it.
    return values.top();
}
