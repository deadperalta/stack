// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long a[], int n)
    {
        vector<long long int>ps(n,-1);
        stack<long long int>s;
        for(int i=0;i<n;i++)
        {
            while(!s.empty() && a[s.top()] >= a[i])
            {
                s.pop();
            }
            if(!s.empty())
            {
                ps[i]=s.top();
            }
            s.push(i);
        }
        vector<long long int>ns(n,n);
        stack<long long int>st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && a[st.top()] >= a[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
                ns[i]=st.top();
            }
            st.push(i);
        }
        long long int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,((ns[i]-ps[i]-1)*a[i]));
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends
