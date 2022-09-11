// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    
    if(s.size() % 2 == 1)
    {
        return -1;
    }
    stack<char>st;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '}')
        {
            if(!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        else
        {
            st.push(s[i]);
        }
    }
    
    int open=0;
    int close=0;
    
    while(!st.empty())
    {
        if(st.top() == '{')
        {
            open++;
        }
        else
        {
            close++;
        }
        st.pop();
    }
    
    if(open % 2 == 1)
    {
        open = (open/2)+1;
    }
    else
    {
        open=open/2;
    }
    
    if(close % 2 == 1)
    {
        close=(close/2)+1;
    }
    else
    {
        close=close/2;
    }
    return open+close;
}
