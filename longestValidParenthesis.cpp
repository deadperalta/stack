// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        int n=s.size();
        int l=0;int r=0;int ml=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
               l++;
            }
            else if(s[i]==')')
            {
                r++;
            }
            if(l==r)
            {
                ml=max(ml,2*r);
            }
            else if(r>l)
            {
                r=0;
                l=0;
            }
        }
        r=0;l=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='(')
            {
               l++;
            }
            else if(s[i]==')')
            {
                r++;
            }
            if(l==r)
            {
                ml=max(ml,2*r);
            }
            else if(l>r)
            {
                r=0;
                l=0;
            }
        }
        return ml;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends
