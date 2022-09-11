//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        queue<int>a;
        
        for(int i:A)
        {
            a.push(i);
        }
        
        queue<int>b;
        
        for(int i:B)
        {
            b.push(i);
        }
        
        stack<int>st;
        
        while(!a.empty())
        {
            int ele=a.front();
            a.pop();
            
            if(ele == b.front())
            {
                b.pop();
                
                while(!st.empty())
                {
                    if(st.top() == b.front())
                    {
                        st.pop();
                        b.pop();
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                st.push(ele);
            }
        }
        return (a.empty() && st.empty());
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        Solution ob;
        cout<<ob.isStackPermutation(n,a,b)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends
