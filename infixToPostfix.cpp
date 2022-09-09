// { Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
    int prec(char ch)
    {
        if(ch == '^')
        {
            return 3;
        }
        if(ch == '*' || ch == '/')
        {
            return 2;
        }
        else if(ch == '+' | ch == '-')
        {
            return 1;
        }
        return -1;
    }
  public:
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        string exp="";
        stack<char>st;
        
        for(int i=0;i<s.size();i++)
        {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                exp+=s[i];
            }
            else if(s[i] == '(')
            {
                st.push(s[i]);
            }
            else if(s[i] == ')')
            {
                while(!st.empty() && st.top() != '(')
                {
                    exp+=st.top();
                    st.pop();
                }
                if(st.size() && st.top() == '(')
                {
                    st.pop();
                }
            }
            else
            {
                while(!st.empty() && prec(st.top()) >= prec(s[i]))
                {
                    exp+=st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            exp+=st.top();
            st.pop();
        }
        return exp;
    }
};


// { Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}
  // } Driver Code Ends
