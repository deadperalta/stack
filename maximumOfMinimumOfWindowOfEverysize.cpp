// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to find maximum of minimums of every window size.
    vector <int> maxOfMin(int arr[], int n)
    {
        stack<int>st;
        st.push(0);
        
        vector<int>left(n);
        left[0]=-1;
        
        for(int i=1;i<n;i++)
        {
            while(!st.empty() && arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            
            if(st.empty())
            {
                left[i]=-1;
            }
            else
            {
                left[i]=st.top();
            }
            st.push(i);
        }
        
        while(!st.empty())
        {
            st.pop();
        }
        
        st.push(n-1);
        
        vector<int>right(n);
        right[n-1]=n;
        
        for(int i=n-2;i>=0;i--)
        {
            while(!st.empty() && arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                right[i]=n;
            }
            else
            {
                right[i]=st.top();
            }
            st.push(i);
        }
        
        vector<int>ans(n,-1);
        
        for(int i=0;i<n;i++)
        {
            int len=right[i]-left[i]-2;
            
            if(ans[len] == -1)
            {
                ans[len]=arr[i];
            }
            else
            {
                ans[len]=max(arr[i],ans[len]);
            }
        }
        
        for(int i=n-2;i>=0;i--)
        {
            ans[i]=max(ans[i],ans[i+1]);
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        vector <int> res = ob.maxOfMin(a, n);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
