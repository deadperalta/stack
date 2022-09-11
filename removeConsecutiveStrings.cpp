//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int removeConsecutiveSame(vector <string > v) 
    {
        stack<string>st;
        
        for(string s:v)
        {
            if(st.size() && st.top() == s)
            {
                st.pop();
            }
            else
            {
                st.push(s);
            }
        }
        return st.size();
    } 
};

//{ Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         string s;
         vector<string> v;
         for(int i=0;i<n;i++)
         {
             cin>>s;
             v.push_back(s);
         }
         Solution ob;
         cout<< ob.removeConsecutiveSame(v) <<endl;
     }
	
	
	
	
	return 0;
}
// } Driver Code Ends
