//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<int> deleteElement(int arr[],int n,int k);

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        vector<int> v;
        
        v = deleteElement(arr,n,k);
        vector<int>::iterator it;
         for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
        cout<<endl;
        
    }
return 0;
}

// } Driver Code Ends


vector<int> deleteElement(int arr[],int n,int k)
{
    stack<int>st;
    st.push(arr[0]);
    
    for(int i=1;i<n;i++)
    {
        if(st.size() && st.top() < arr[i])
        {
            while(st.size() && k > 0 && st.top() < arr[i])
            {
                st.pop();
                k--;
            }
        }
        st.push(arr[i]);
    }
    
    vector<int>ans;
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    
    reverse(ans.begin(),ans.end());
    return ans;
    
}
