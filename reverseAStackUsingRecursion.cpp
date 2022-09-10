//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    void insertAtBottom(stack<int>&st,int x)
    {
        if(st.size() == 0)
        {
            st.push(x);
        }
        else
        {
            int a=st.top();
            st.pop();
            
            insertAtBottom(st,x);
            
            st.push(a);
        }
    }
    void solve(stack<int>&st)
    {
        if(st.size() > 0)
        {
            int x=st.top();
            st.pop();
            
            solve(st);
            
            insertAtBottom(st,x);
        }
    }
public:
    stack<int> Reverse(stack<int> St){
        solve(St);
        return St;
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        stack<int> ans=ob.Reverse(St);
        vector<int>res;
        while(ans.size())
        {
            res.push_back(ans.top());
            ans.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends
