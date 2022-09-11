// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int closing (string s, int pos)
        {
        	int c=0;
        	for(int i=pos+1;i<s.size();i++)
        	{
        	    if(s[i]=='[')
        	    {
        	        c++;
        	    }
        	    if(s[i]==']')
        	    {
        	        c--;
        	    }
        	    if(c==-1)
        	    {
        	        return i;
        	        break;
        	    }
        	}
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int pos; cin >> pos;
        Solution ob;
		cout <<ob.closing (s, pos) << '\n';
	}
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
