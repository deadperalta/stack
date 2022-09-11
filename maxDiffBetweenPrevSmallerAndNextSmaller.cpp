//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int A[], int n)
    {
        vector<int>left(n);
        left[0]=0;
        
        stack<int>st;
        st.push(A[0]);
        
        for(int i=1;i<n;i++)
        {
            while(!st.empty() && A[i] <= st.top())
            {
                st.pop();
            }
            if(st.empty())
            {
                left[i]=0;
            }
            else
            {
                left[i]=st.top();
            }
            st.push(A[i]);
        }
        
        while(!st.empty())
        {
            st.pop();
        }
        st.push(A[n-1]);
        vector<int>right(n);
        right[n-1]=0;
        
        for(int i=n-2;i>=0;i--)
        {
            while(!st.empty() && A[i] <= st.top())
            {
                st.pop();
            }
            if(st.empty())
            {
                right[i]=0;
            }
            else
            {
                right[i]=st.top();
            }
            st.push(A[i]);
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            ans=max(ans,abs(left[i]-right[i]));
        }
        return ans;
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
   	int a[n];
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	Solution ob;
   	cout<<ob.findMaxDiff(a,n)<<endl;
   }
    return 0;
}



// } Driver Code Ends
